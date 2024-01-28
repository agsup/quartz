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

# Walmart Problem

- Draw ERD
- Give set of normalized relations
- C: 3-4
- D: 2-3
- B: one is enough, could be none
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