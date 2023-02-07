#OOP 

### Objects have *reference semantics*
- Every class object behaves as if it is a C++ reference
	- Ex. Two variables can "point" to the same object
- Equality (`==`) compares identity, not value
- Primitive types have *value semantics*
- No `const` objects in Java
	- Can declare `final`, just means var cannot be changed
		- Same as a const-ref in C++
### Classes
- Fields and methods
	- Written identically to C++
	- Cannot separate interface and implementation in Java
	- Static methods can only call other static methods
- Method Overloading
	- Just like C++
- `this` pointer
	- Same as C++ (used implicitly for members)
	- Points to the object on which the method was invoked
		- Note: `->` does not exist, everything uses `.`
### Constructors
- Same name as class (like C++)
- No member init list
	- This is because they are all initialized to `null` or equivalent
		- Primitives are initialized to zero (or equivalent)
		- object fields are initialized to `null` pointers
### Destructors
- There are none!
- Objects are automatically garbage collected
	- This can lead to issues, you have no control over when it happens
	- Also has some performance impact
	- No [RAII](https://en.cppreference.com/w/cpp/language/raii)
