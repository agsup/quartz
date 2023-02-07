#OOP
# Same code does different things for different types

### Core Mechanics
- ###  [[Inheritance]]
- #### [[Abstract Classes]]  
### Types of Polymorphism
- [[Ad-hoc Polymorphism]]
- [[Subtype Polymorphism]]
- [[Parametric Polymorphism]]
### Things to remember
- Remember difference between [[Inheritance#^2e545c|"is-a" and "has-a"]]
- Base class: parent
- Derived class: child
- [[Inheritance#^7da4d1|Protected visibility]]
	- Note: Review [[Inheritance#^bf9d78|types of inheritance]]
- [[Inheritance#^96a5ee|Order of Construction/Destruction]]
- When a base class and derived class both have identically named members, it is called [[Inheritance#^b7d12f|hiding]]
	- Note: Overriding is a different situation
		- Overriding is replacing a function in the base class with an identically named function in the base class
			- The main difference is that the signature of the overriding function is identical to the base class function
- Definition of a [[Abstract Classes#^e4a32a|polymorphic type]]
- [[Abstract Classes#^4e6ace|Pure virtual methods]]
- [[Abstract Classes#^7c273a|Abstract type pointers]]
- It is generally UNSAFE to cast a base class object to a derived class object
- It is generally SAFE to cast a derived class object to a base class object
	- See [[Inheritance]]
	- Also see `static_cast` vs `dynamic_cast`
- You can inherit from many classes simultaneously
	- Comma-delimited list
		- Ex. `class Square: public Shape, public Rectangle, public Polygon {}`
	- Safest form of multiple inheritance is to only inherit from more than one class when...
		- One class defines implementation
		- Other classes can define interface