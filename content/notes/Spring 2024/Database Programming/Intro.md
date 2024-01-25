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
		- Multivalued dependency: if a ->-> b and a ->(->) c
			- If a multidetermines b, it should not functionally determine anything else
			- If this occurs every permutation of a set of keys must be accounted for
				- If a ->-> b and a ->-> c, then table must include (a, b1), (a, b2), (a, c1), and (a, c2) (very cluttered)
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

Homework: Don't do N or O