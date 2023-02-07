### `java.lang`
- Most of the classes in the list are in this package
- This package doesn't have to be imported
### `Object`
- Base class to all classes (every class you make inherits from it)
- Methods defined in this class are in all classes
	- Base methods
		-  `public boolean equals( Object obj )` – do two objects have equal values?
		-  `protected Object clone()` – create a copy of this object
		-  `public String toString()` – make string representation of object (e.g. for printing)
	- Note: these methods still need to be *defined*, but they are still there
	- They should be considered as pure abstract (see [[Abstract Classes|Polymorphism: Abstract Classes]]), though they technically have a base definition
### Wrappers for Primitive Types
- Sometimes you want primitive types as objects so that you can assign the `Object` variable
- Every primitive has a wrapper that is the full name of the type capitalized (`Integer` for `int`, `Boolean` for `boolean`, etc.)
- The value given in the constructor cannot change
- These wrapper classes also have static methods for string operations for each primitive
- This allows you to do an "implicit conversion assignment" (called "boxing", real implicit conversions only happen between certain primitives) from primitive to `Object`
	- Ex. 
``` 
	Object o = new Object();
	int j = 5;
	 o = j; // j is boxed into o because Integer "is-a" Object
```
### Strings
- All strings (even literals) are `Strings`
- Value cannot be changed
	- Immutable
	- Can use `StringBuilder` to build a string piece-by-piece
- Concatenate with `+`
	- Converts objects using `toString`
- Get size using `length` method
- No array indexing because...
	- A String is not an array
	- There is not operator overloading
- Special `equals` method
	- `public boolean equalsIgnoreCase(String str)`
