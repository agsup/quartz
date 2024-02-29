# Steps from Data Model to Databases Design

- Create table for entities
	- Specify keys
	- Specify column properties, defaults, etc.
		- Note: determine what is allowed to be *null*
	- Verify normalization
- Create relationship via foreign keys (of all the different types)
- Specify logic for enforcing minimum cardinality (M-O, O-M, M-M)
	- Note: Nothing to enforce for O-O
- Keys
	- Primary key is of utmost importance
	- They will be logical pointers for relationships
		- Instead of a memory location, it's a key for the physical location in storage
	- Best keys are short, numeric, and stable ("best" meaning "fastest for the DBMS")
		- Note: *surrogate keys technically meet these requirements, but are bad for other reasons*
	- Surrogate keys:
		- Determined by the DBMS (ex. auto-increment IDs)
		- Meaningless to the user
		- Problems arise when combining data from multiple databases (conflicts in nonkey attributes or in surrogate keys between databases themselves)
- Column properties
	- NULL vs. NOT NULL
		- Determining these determines minimum cardinality
	- Data type
	- Default value
	- Constraints
		- Values, ranges
			- Ex. must be a valid zip code, must be 1-10, must match from a list, etc.
		- Comparisons within the same table (strange and rare)
		- Comparisons with data from other tables
		- Referential integrity (the avoidance of "null pointers")

# POI

- Surrogate keys
	- Keyed by the database arbitrarily
	- When merging data from several databases, surrogate keys can make things challenging
- M-M (Mandatory to Mandatory)
	- Hard to enforce
		- What do I add first? (the chicken or the egg?)