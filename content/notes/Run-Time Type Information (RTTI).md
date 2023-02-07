#OOP 
# Extra Information added to the object so we can tell its type at run-time

- Kind of misses the point of Polymorphism, but is sometimes necessary
- Only available if class is a [[Abstract Classes#^fa89f3|Polymorphic Type]]
- Better to write code that doesn't care about its type

## The `typeid` operator
- The `type_info` object is used to uniquely identify a type
	- Defined in `<typeinfo>` header
	- Cannot be moved/copied
	- Contains name of class purely for debug purposes
	- Overloads `=`/`!=` operators

## Converting between types by reference
- We can convert a derived class ptr to a base class ptr (because a Student "is-a" Person, a Square "is-a" Shape, etc.)
- How can we make this happen in the other direction?
	- Generally not advised, so is not doable <u>by default</u> (because not every Person "is-a" Student!)
	- C++ will allow you to typecast between pointer types
		- ex. `int*` can be typecasted to `float*`
			- Note: this is a terrible idea, but a good example of the feature
		- This does <b>not</b> change the address, but it does change how C++ treats the data
			- Example, typecasting an `int` to a `long` makes that pointer try to access data that doesn't belong to it (not good)
		- Be <b><u>very careful</u></b> with using this!
		- Only use it if you know <b><u>for certain</u></b> what the object you're referencing is supposed to be
	- Check with conditions for type using `typeid` before trying to typecast the pointer
	- [[Example Code|Method]]
	- Safer Method: use `static_cast`
		- Performs type-checking at compile time
		- Cannot be 100% sure, but has a decent chance of success
		- `Student& sref = static_cast<Student&>(*pptr);` 
			- Ok - it's possible that's a student
		- `int* iptr =` `static_cast<int>(&student);` 
			- Error, will not compile (there's no way that's pointing to an int)
	- Safer-er Method: use `dynamic_cast`
		- Like `static_cast`, but it checks at <b><u>run-time</u></b>
		- Fails if unsafe
			- If reference cast, returns an `std::bad_cast` exception
			- If pointer cast, returns `nullptr`
		- 

## Two more "specialized" cast-by-reference things
 - `const_cast<type>(value)`
   - Take away const from a pointer or reference (not a value)
		- Useful for interfacing with code where the parameter should be const but is not
		- Do not abuse – changing constant variables can result in undefined program behavior
    - `reinterpret_cast<type>(value)`
		- Anything else (e.g., float to int&)
		- Make sure you know what you're doing!












[[Polymorphism|back to root]]
<a href="https://cs.harding.edu/gfoust/classes/comp3450/notes/rtti">Link to Foust's notes</a>