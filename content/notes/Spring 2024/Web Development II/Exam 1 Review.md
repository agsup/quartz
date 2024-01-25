---
title: Exam 1 Review
---
# CommonJS vs ES Modules

- module.exports vs export keyword
- defaulting
	- module.export = (insert default module here)
	- default export (insert module/object)
- Require vs import

Test will cover <u>CommonJS</u> primarily

# Other

- var vs. let vs. const
	- var is accessible outside of its block's scope
	- let is scoped to its block
	- const is immutable
- No difference between single and double quotes strings
- Backticks (\`\`) allow variable interpolation and embedded newlines (not \n, but actual line breaks in the code file)
- Example:
```JS
`i am a string
with an embedded newline.`

```
- Object\[thing\] vs Object.thing
	- In the first, thing is treated like a variable name rather than a property name
	- Object\[thing\] ≠ Object\['thing'\], Object\['thing'\] = Object.thing
- in vs of: for loops
	- in gives properties, of gives contents (ie. of arrays)
	- Example:
```JS
for (let x in o) // x is a property of o
for (let x of o) // x is an iterable content of o

```
- Double vs triple equals
- "Truthiness" vs "Trueness" (kind of true vs actually the same type and value)
	- Example:
```JS
1 == "1" // true

1 === "1" // false

```
- Object assignment
	- Oops! All references!
	- Example:
```JS
let a = new Object();
let b = a;

b.x = 0;

a.x === b.x // true

```
- Arrow notation (yay)
- Closure
	- A function with data that it has captured
	- Example
```JS
function fee(n) {      // this is the closure
	return m => m + n; // this is the captured data
}

x = fee(5);  // this is a closure where n = 5
y = fee(10); // this is a separate closure where n = 10
```
- If you separate a method from its object, it will lose its object scope (ex. `this` keyword)
	- To mitigate this, if you require a function passed as an arg you can put the method ran on the object in a lambda
- Definitions:
	- Module: file (in a general sense, a group of related code)
	- Namespace object: an object used as a "struct" to export things as groups and avoid name conflicts
- NodeJS
	- JavaScript Runtime Engine for the console
	- Node Package: any directory that contains `package.json`
- server.listen(x), x = port number

# TODO:

- Try out nodemon

cs.harding.edu/gfoust/classes/comp4310/exam01.html