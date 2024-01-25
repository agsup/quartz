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