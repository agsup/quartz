#OOP 

## Inheritance is Abstraction, but extended

### Features of Inheritance

- Generalize a group of related classes
	- Ex. Imagine classes for `Student`, `Faculty`, `Staff`
	- Abstraction allows one blueprint for all three
	- Implementation: For a `Person` blueprint, `Student` is a more specific type of `Person` with extra fields, Employees are a specific type of `Person`, `Faculty` is a specific type of Employee, etc.
- "Is a" vs "has-a" ^2e545c
	- "Is-a"
		- `Faculty` is a type of `Person`
	- "has-a"
		- `Person` has a type `Faculty`
- Base vs. Derived classes
	- Derived classes inherit the properties of the Base class
		- Ex. `Student` inherits properties of `Person`
- Usage ^e8f55b
	- Implemented as `class Person : public Student {...}`
	- ##### New privacy: `protected` ^7da4d1
		- `protected` allows the derived class to access a field of the base class, but not `main`
	- Types of inheritance ^bf9d78
		- `public` inheritance represents "is-a" (most common)
		- `private` / `protected` represent "implemented-by" (is not an instance of base class. but is implemented by base class)
		- Many other object-oriented languages don't support `private` / `protected`
		- Usually don't need `private` inheritance, can make the object contain a private instance of the other class ("has-a" relationship)
- Constructors/Destructors ^96a5ee
	- Derived is constructed before the base is
	- Called in following order:
		- Constructors for members of the base class
		- Constructor for the base class
		- Constructors for members of the derived class
		- Constructor for the derived class
		- Destructors are called in reverse order
- Field/Method Hiding ^b7d12f
	- If field in derived class is named identically to a field in base class, it takes precedence
		- Usually a bad idea (confusing)
		- Is good for reusing names for private members of base class

[[Inheritance Notes Link | Foust's Notes]]
