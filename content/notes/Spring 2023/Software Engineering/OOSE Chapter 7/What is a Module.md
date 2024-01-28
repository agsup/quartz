## What is a Module?

### A Thorough Definition
- "A lexically contiguous sequence of program statements, bounded by boundary elements, having an aggregate identifier"
- What the ***heck*** does that mean?!
	- Lexically contiguous: Program statements are organized in a group that is strung together in sequence. A program statement is to a module as a letter is to a word
	- Program Statement: A core piece of functionality to the program, often stored in a function
	- Boundary elements: Means by which to encapsulate elements into the module, an example is `{...}` pairs in C++ and Java
	- Aggregate identifier: The name of the module. Can be a namespace or a class name

### Purpose of Modularization

- Modules should serve a specific purpose and have a simple interface
	- Example of a good interface/organization and a bad interface/organization is in pages 174-176 in the book, with figures 7.1-7.3