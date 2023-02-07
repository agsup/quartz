#ArchAssembly
Graphical representation and further documentation is shown [[Intro to Digital Circuits.pdf|here]]
## Boolean Operators
- We need to know how to write these...
	- Symbolically
	- Multiplication table
	- Digital circuits
- 1 is true, 0 is false
- AND is A×B
  -
|   ×   | 0     | 1     |
|:-----:| :-----: | :-----: |
| **0** | **0** | **0** |
| **1** | **0** | **1** |

- OR is A+B
  -
|   +   |   0   |   1   |
|:-----:|:-----:|:-----:|
| **0** | **0** | **1** | 
| **1** | **1** | **1** |
- Not is !A
- NAND is <a style="text-decoration:overline;color:#FFFFFF;">A×B</a>
  -
|   NAND   |   0   |   1   |
|:-----:|:-----:|:-----:|
| **0** | **1** | **1** | 
| **1** | **1** | **0** |
- NOR = <a style="text-decoration:overline;color:#FFFFFF;">A+B</a>
  - 
|   NOR   |   0   |   1   |
|:-----:|:-----:|:-----:|
| **0** | **1** | **0** | 
| **1** | **0** | **0** |
- XOR is A ⊕ B (exactly one is true)
  - 
| **⊕** | **0** | **1** |
|:-----:|:-----:|:-----:|
| **0** | **0** | **1** |
| **1** | **1** | **0** |
## Proofs Using Truth Tables
- Table with two columns, one for A and one for B
- 
|  A  |  B  | A×B | A + (A×B) |
|:---:|:---:|:---:|:---------:|
|  0  |  0  |  0  |     0     |
|  0  |  1  |  0  |     0     |
|  1  |  0  |  0  |     1     |
|  1  |  1  |  1  |     1     |



## Circuit Simplification of Boolean Algebra
- With a written circuit...
	- Follow through and write <u>exact</u> equivalent expression
	- THEN simplify. Don't simplify as you go.
		- Order of Operations
			1. DeMorgan's Law: NOT is distributable
			2. AND has higher precedence than OR
			3. Use Commutative/Associative Properties like you would with normal Algebra (FOIL)
		1. Rules
			1. 0 × anything = 0 
				- (anything and false = false)
	- Ex. (A×B) + (A×C)
	- A(A×B) + A(A×C)
	- A × (B×C)

## next

-  hello
	- hi
		- 
	 | a   | table |
     | --- | ----- |


[[Classwork4142022]]