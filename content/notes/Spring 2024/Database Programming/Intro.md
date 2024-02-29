---
title: DB Overview
---
# Big Picture

- At the base of the operation is a disk containing the data
- The disk controller interfaces with the disk to access data
- Next are the CPU, OS, and FS (File System) which organize the data
- Next is the DBMS (**D**ata**b**ase **M**anagement **S**ystem) which manages the database
	- This is the first part of the chain a user can directly interact with (think MySQL console)
- The DBMS can also be accessed through apps (directly) or servers (through browser/web apps)

# DB Definition

- Kroenke: a self-describing collection of integrated tables/records
- Databases work by storing *metadata* and *user data*
	- Metadata stored includes:
		- Data Dictionary
		- Stored Relationships (relations to other tables)
		- Overhead Data (indices, b-trees, etc.)
	- User data is the direct contents of the database

# Advantages

1. Controlled Redundancy
	- Reduces labor
	- Increases integrity
	- Increases accuracy
		- More redundancy creates a risk of *inconsistency* between redundant tables
	- The only downside of this approach is that users of the DB are required to share the data
1. Security and Privacy
	- Prevents unauthorized access
	- Guards valuable resources
	- Protects individual rights
	- Built into the DBMS
1. Shared Access
	- Sharing is mostly good!
	- Crosses departmental boundaries
	- Avoids redundancy by having data in *only one place*
1. Data Integrity 
	- Confidence in the accuracy of the data
	- Consequence of reduced redundancy (point 1 is pretty important)
1. Increased Consistency
	- Company-wide standards
	- Easier to share data
	- Ability to build cross-departmental applications
1. TODO: go back and fill in the other points

1974: developer time becomes more expensive than machine time

# Normalization

- Essence: identifying and eliminating modification anomalies
- More things to fill from last period
## Preview of Normal Forms

- 1NF, 2NF, 3NF, BCNF (Boyce-Codd), 4NF, 5NF... DKNF
- Each is a subset of the previous
	- If all the problems in 1NF are fixed, DB is 2NF, 3NF has fixes from 1 and 2, 4NF from 1, 2, and 3, and so on.
- DKNF is the best possible, there are more forms between 5NF and DKNF
	- Though they exist, 6NF and 7NF are really rare (you really have to try to actively cause problems in those)
- DKNF is the primary design goal for a database
- Much of these differences are common sense/intuitive
- Formal Definitions:
	- 1NF
		- All relations are in 1NF
		- Math definition for relation: a set of ordered n-tuples
		- Binary relation: a set of ordered pairs
		- N-ary relation: ordered n-tuples
		- Set definition: a unordered collection with unique entries
		- The difference between relations and sets: sets are unordered collections, whereas relations are unordered sets of ordered tuple entries
		- Example:
			- { (a, b), (c, d) } = { (c, d), (a,  b) } ≠ { (a, b), (d, c) } 
	- 2NF
		- *All* non-key attributes are dependent on *all* of the key
		- Mostly relations with composite keys
	- 3NF
		- 2NF + no transitive dependencies
		- Transitive Dependency: If a -> b, and b -> c, then a -> c
		- ***We don't want transitive dependencies!***
		- Fix: if a -> b -> c, then split the table (a -> b in one table, b -> c in another)
		- Transitive dependencies can be a symptom of faulty theme
	- BCNF
		- "3.5NF"
		- Added retroactively
		- 3NF + every *determinant* is a *candidate key*
		- Determinant: One or more attributes that determine a dependent attribute
		- Candidate key: 
		- Fix: if a -> b, c -> b in one table, split table
	- 4NF
		- BCNF + no multivalued dependencies
		- Multidetermination: a ->-> b: given a we can look up/calculate one or more values for b
		- Multivalued dependency: if a ->-> b *and* a ->(->) c
			- If a multidetermines b, it should not functionally determine anything else
			- If this occurs every permutation of a set of keys must be accounted for
				- If a ->-> b and a ->-> c, then table must include (a, b1), (a, b2), (a, c1), and (a, c2) (very cluttered)
	- 5NF
		- Definition is not important
		- Essence: to prevent dividing into sub-relations in such a way that the original cannot be reconstructed
		- More of a theoretical result than a practical one
	- DK/NF
		- Every *constraint* on the relation is a *logical consequence* of the definition of *domains* and *keys*
			- Constraint: Integrity rule; functional dependencies, rules on intra/interrelations
			- Logical Consequence: derivable using the rules of logic (Provable)
			- Domain: set of all possible values that an attribute can have (this proof uses physical domain only)
			- Physical Domain: possible values based on a physical rule (ex. zip code is a 5 digit number)
				- Not always necessarily specific enough for accuracy (some 5 digit numbers are invalid zip codes)
		- One theme per relation
		- DK/NF iff (if and only if) no modification anomalies
			- DK/NF was defined specifically to pass this proof
			- The proof goes both ways (DK/NF if no anomalies, no anomalies if DK/NF)
		- No formal algorithm/methodology to convert a relation into DK/NF
		- Can test to see if you have it
		- Rules to satisfy and rules to avoid (normalization)
		- 4NF is so close to DK/NF that the requirements are often easy to meet if not already met
		- Mathematically proving DK/NF is too much work to be useful
			- Use normalization and intuition
# Synthesis
## Relations

- Rules for deciding if two attributes can be in the same relation
	- Based on 3 possible relationships between 2 attributes (NOT entities)
		1. 1:1 (one to one)
			- a -> b and b -> a
			- They may be in the same relation, either may be the key (choose one and stay with it)
			- All other attributes must be functionally determined by the key
			- Example: SSN and H#
		1. 1:M (one to many)
			- a -> b and b ->-> a
			- Key must be a
			- All other attributes must be functionally determined by the key
			- Example: SSN and Dorm (every SSN has one dorm room, every dorm has more than one SSN)
		1. M:N (many to many)
			- a ->-> b and b ->-> a
			- If alone together in relation, key must be composite of both
			- Any other attributes which may be added must be functionally determined by entire composite key
			- If a new attribute expands the key, the theme has changed and the relation should be renamed
			- Two different M:N relationships will need two different relations
			- Example: H# and CRN (a student can take multiple classes, a class can have multiple students)

## Assessing Structure of an Existing DB

- Count rows and examine columns
- Examine values and interview to determine:
	- Multivalued dependencies
	- Functional dependencies
	- Candidate keys
	- Primary keys
	- Foreign keys
- Assess validity of referential integrity constraints

## Normalize or Not?

- Pros
	- Eliminate modification anomalies
	- Reduce duplicate data
	- Enhance data integrity
- Cons
	- More complicated SQL for queries
	- Slower DBMS (more work)
- Updatable (writeable) vs Read-Only
	- Different design guidelines and priorities
	- Duplication/Denormalization is OK for read-only
	- Joined tables may be stored for read-only
	- Know when to break the rules
		- Example: Student(<u>SSN</u>, Name, Street, City, State, Zip)
			- Not in 3NF or BCNF because Zip -> (City, State), but is not a candidate key
			- Fix: Split
			- Issues of fixing:
				- Table loses ease/speed of access
				- Loss of stability of zip codes

# The Data Model

- A plan/blueprint for a database design
- More generalized/abstract than a database design
- Easier to change than a database design, appropriate place to visualize concepts
- Approaches
	- ERD - Top Down - Table to Table
	- SOD (Semantic Object Diagram) - Bottom Up - Row to Row
	- RT (Relational Theory) - Inside Out - Col to Col
-  ER Model
	- Made by Peter Chen in 1976
	- many variations, not a set standard
	- Rectangles for entity classes
	- Diamonds for relationships
	- ***Do not*** use "balloon" attributes
		- Speech bubble lookin ahh
- Cardinality
	- Minimum Cardinality: smallest number of instances in a relationship
		- 0/1 notation (hashmark) (0 is optional, 1 is required)
		- Min cardinality for marriage states that the relation is 1:1, but could be 0:0
		- For students and cars, there can be a carless student but not a studentless car (1:0)
	- Maximum Cardinality: largest number of instances in a relationship
		- Maximum Cardinality defines three types of binary relationships (1:1, 1:M, M:N)
- Multiple Associations
	- Possible even likely
	- Don't confuse instances
	- Ex. Men *can* have married relation to women, only *certain* men have that relation to *certain* women
- Weak Entities
	- Cannot exist without another entity
	- Drawn with rounded corners on the rectangle
	- Examples:
		- Dependent w/o employee
		- Appointment w/o client
	- ID-dependent weak entities
		- Entities that don't have their own key
		- Ex. Dr. Baird's children didn't have their own insurance keys, they were registered under his
- Sub/Supertypes
	- Generalization hierarchies
	- "is-a" relationships
	- Parent/child concept
	- Ideas of inheritance from OOP
	- Drawn without a diamond
	- Arc between subtypes can be drawn with a number to say how many subtypes an object can have
		- Ex. arc with number 1 between salaried and hourly worker says that you an only be one of the two
- Recursive Relationships
	- An entity has a relationship with itself
	- May be 1:1, 1:M, or M:N
		- Rules are similar to non-recursive relationships
	- Ex. Engine pulls boxcar, *boxcar pulls boxcar*, boxcar pulls boxcar pulls boxcar...
	- Drawn by directing the line back to the entity of origin (as you would expect)
- BOMP Pattern
	- **B**ill **O**f **M**aterials **P**rocessing
	- Name used for any many to many recursive relationship (regardless of its relation to engineering)
	- "Assembly contains Assembly" (Part can be made up of other Parts)
- M:N vs. Association Pattern
	- Ex. Student and Course (M:N)
	- Where does the grade go?
		- The intersection, along with the details of a specific student's relation (H#, CRN, etc.)
	- M:N are implemented with intersection relations
	- Most M:N are in the association pattern
		- Rare to have an intersection without additional attributes
- ID-Dependent Relationships
	- Multivalued Attribute Pattern
		- Ex. Company can have multiple phone numbers (phone number will have an optional many to one relationship to company)
			- Stored in table of phone numbers (for multiple companies) with company name as key
			- Phone numbers would then be *ID-Dependent weak entities*
	- Archetype/Instance Pattern
		- ID-dependent child entity is the physical manifestation (instance) of an abstract or logical parent
			- Ex. Painting:Print, Design:Product, etc.
			- The attributes of the instances can be completely different from the parent (ex. a blueprint doesn't have an address, a house does)
			- Key of instance includes the key of the parent
			- Children are weak, children can be represented as non-ID-Dependent (though it is more possible to lose information this way)
- Business Rules
	- Will arise during analysis needed for ERD
	- Not part of ERD
- Helpful Hints
	- Look for nouns to determine entity classes
		- Note: not every noun is an entity class, but all entity classes are nouns
	- If you only have one instance, it's not a class
	- If there are no attributes, it's not a class
		- Note the attributes of a class may not be relevant to the table, and it may be valuable to recognize these examples as classes
	- Examine and adjust forms and reports
	- This is an iterative process

# POI

- Data Independence is very important!
- Functional Dependency: Given the value of one attribute we can either look up or calculate *exactly* one value for the other
	- For example, Name is functionally dependent on SSN (each SSN only has one name attached), but vice versa does not apply (Matt Smith could give two different SSN's)
	- In addition, this dependency can be notated with arrows (SSN -> Name), and can be shorthanded to include multiple dependencies ( SSN -> (name, phone, birthday) )
	- Implies nothing about uniqueness of either the key or the dependency
		- Name can be duplicated without regard to SSN (this is pretty obvious)
		- *However*, SSN could not be in multiple rows
- Key: a group of one or more attributes which uniquely defines a row
	- Key is the attribute that functionally determines the non-key attributes in a relation (the SSN in the above example)
	- Underlying applications must be looked at to determine what a key should be
- Theme: The most important thing about a table (what it stores, in a short descriptive title)
	- General rule: if there are multiple themes (the theme contains an "and"), the table can be split
- Note: to redesign a table, you can simply say name_of_table(<u>key</u>, col, col)
	- The name of the table should *ideally* be related to the theme
	- Make sure to underline the key
- Remember "One theme per relation" for the test (DK/NF)
- Logical db design is the most important skill the class teaches
- Entity vs. Entity Class vs. Entity Instance
	- Semi-trick question: Entity = Entity Class (ex. "Student Entity" does not refer to a specific student)
	- Entity Instance is a specific example of an Entity (ex. Greg is an Entity Instance for Student)
- Attribute: Something which describes an entity
- Classifying Queries using A(E) = V
	- Attribute of entity = value (ex. "hair color" of "Greg" = "black")
	- Query of "what is Greg's hair color?" can be A(E) = ?
	- Other examples: A(?) = V, A(?) < V, ?(E) = V, etc.
	- Multiple question marks are possible (ex. ?(?) = V could mean "I have a number. Whose is it, and what does it represent?")
- If something is 1:1 and mandatory, it might be better to represent that entity as an attribute of the entity that requires it (ex. every team has to have a head coach so it might be possible to include the coach as an attribute of the team)
- Null values are fine...?

# ERD Rules

- Put relation *name* in the diamond (ex. store has dept.)
	- Do NOT put relation *type* in diamond (1:M)
- Only make rectangles of *entities*
	- Multiple instances
	- Has attributes
		- Note: it is possible (but rare) that there is only one attribute for an entity class
- Simply determine entities, determine relations (names), and connect them with relation (types)
- At *minimum*, for a M:N relation the key will be that of both parents combined
- Intersection relation
	- relation that connects two entities
	- This relation can have properties (elk problem: this ranger saw this elk at this date at this location aka. ranger sees elk)
	- Can name relation in diamond or connect with an entity (more verbose)
- If the same entity is multiple attributes (ex. two teams play in a game), make two "has a" connections between the entities

[[Test 1 Review]]

[[notes/Spring 2024/Database Programming/Exam 2]]