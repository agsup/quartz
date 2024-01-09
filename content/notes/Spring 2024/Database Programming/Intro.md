---
title: Why DB?
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
1. 
2. 
3. 
4. 
5. 
6. 
7. 
8. 
9. 
10. 

# POI

- Data Independence is very important!