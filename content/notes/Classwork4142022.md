#ArchAssembly
|  A  |  B  |  C  | OUT |
|:---:|:---:|:---:|:---:|
|  0  |  0  |  0  |  1  |
|  0  |  0  |  1  |  0  |
|  0  |  1  |  0  |  1  |
|  0  |  1  |  1  |  0  |
|  1  |  0  |  0  |  1  |
|  1  |  0  |  1  |  0  |
|  1  |  1  |  0  |  1  |
|  1  |  1  |  1  |  0  |


- What boolean expression is equivalent to this truth table?
- What is that expression when simplified?
  - A simple (but unwieldy) way to get an unsimplified formula from a truth table
	  - Sum of Products
		- Figure out what combination of operations get a certain answer
				- Ex.
			  - Row 1: !0 and !0 and !0 = 1
			  - Then get formula for more rows
			  - Row 3: !0 and 1 and !0 = 1
			  - Row 5: 1 and !0 and !0 = 1
			  - Row 7: 1 and 1 and !0 = 1
			  - Then write out as a sum of the products (thus the name)
		  - (<a style="text-decoration:overline;color:#FFFFFF;">0</a> × <a style="text-decoration:overline;color:#FFFFFF;">0</a> × <a style="text-decoration:overline;color:#FFFFFF;">0</a>) + (<a style="text-decoration:overline;color:#FFFFFF;">0</a> × 1 × <a style="text-decoration:overline;color:#FFFFFF;">0</a>) + (1 × <a style="text-decoration:overline;color:#FFFFFF;">0</a> × <a style="text-decoration:overline;color:#FFFFFF;">0</a>) + (1 × 1 × <a style="text-decoration:overline;color:#FFFFFF;">0</a>) = 1
	  - Option 2: Karnaugh Map
		  - This map is a Torus, both axes wrap around
		  - Circle the 1's
		  - Note: Circle can be stretched but not bent
			  - If circles are drawn correctly, resulting output is always simplified

| AB/CD | 00  | 01  | 11  | 10  |
|:-----:|:---:|:---:|:---:|:---:|
|  00   |  0  |  0  |  1  |  1  |
|  01   |  0  |  0  |  1  |  1  |
|  11   |  0  |  0  |  0  |  0  |
|  10   |  1  |  1  |  1  |  1  |


Q2:

|  A  |  B  |  C  |  D  | Val |
|:---:|:---:|:---:|:---:|:---:|
|  0  |  0  |  0  |  0  |  1  |
|  0  |  0  |  0  |  1  |  0  |
|  0  |  0  |  1  |  0  |  1  |
|  0  |  0  |  1  |  1  |  1  |
|  0  |  1  |  0  |  0  |  0  |
|  0  |  1  |  0  |  1  |  0  |
|  0  |  1  |  1  |  0  |  1  |
|  0  |  1  |  1  |  1  |  1  |
|  1  |  0  |  0  |  0  |  1  |
|  1  |  0  |  0  |  1  |  0  |
|  1  |  0  |  1  |  0  |  1  |
|  1  |  0  |  1  |  1  |  0  |
|  1  |  1  |  0  |  0  |  0  |
|  1  |  1  |  0  |  1  |  0  |
|  1  |  1  |  1  |  0  |  0  |
|  1  |  1  |  1  |  1  |  0  |

|  A  |  B  |  C  |  D  | Val |
|:---:|:---:|:---:|:---:|:---:|
|  0  |  0  |  0  |  0  |  0  |
|  0  |  0  |  0  |  1  |  1  |
|  0  |  0  |  1  |  0  |  0  |
|  0  |  0  |  1  |  1  |  1  |
|  0  |  1  |  0  |  0  |  1  |
|  0  |  1  |  0  |  1  |  0  |
|  0  |  1  |  1  |  0  |  0  |
|  0  |  1  |  1  |  1  |  0  |
|  1  |  0  |  0  |  0  |  0  |
|  1  |  0  |  0  |  1  |  1  |
|  1  |  0  |  1  |  0  |  1  |
|  1  |  0  |  1  |  1  |  1  |
|  1  |  1  |  0  |  0  |  1  |
|  1  |  1  |  0  |  1  |  0  |
|  1  |  1  |  1  |  0  |  1  |
|  1  |  1  |  1  |  1  |  0  |


[[hw1]]
[[HW 10 - LED]]
