#ArchAssembly
Boolean 0
1. Find Boolean expressions that are equivalent to the following logic diagrams. DO NOT SIMPLIFY! 
	a. F = <a style="text-decoration:overline;color:#000000;">(A + B) × B</a>  ![](https://lh6.googleusercontent.com/cGoLbsdv_Pv9XBzxJHZeAfREaX0ZVWer_fuHGfsIRn1E4_uSnrvBDzH8E_b3xlXIKcQqHNLfW5J-B31bO-iyDUVtQ3Kr5SNo2msUGZoB0oMDj1M_dJLPtAVeGMkSkn2x90pxiOg3)
	b. F = (A × <a style="text-decoration:overline;color:#000000;">B</a>) + (<a style="text-decoration:overline;color:#000000;">A</a> × B)  ![](https://lh3.googleusercontent.com/sJO7_RrXc6gyPHN4VnAHY7ujEWmG7RohOVnOVnrXZNQcfTDXRnvYJk5sxXDCBwROCYeDb4aeM0JBsMkIphtGbEjMOEo4brHwCizDUWGQMnyM3pzD4VrR6I92LiWdIRR4chYiCdEL)
	c. F = <a style="text-decoration:overline;color:#000000;">(A × B) × (B + C)</a>  ![](https://lh4.googleusercontent.com/bLFcBiJChbTkgftsMqlfCFyNsoxI6eUnoRXbaP0GJjWx20SCDvrvTcEIOwbNW6KGbyqKQDf67wYE4VliCSgNBPX-r2SWusBAWBMNEf9GC3HeRiN1agfVxhrvZZypIi7gTt0q1c7N)

2. Draw logic circuits that are equivalent to the following Boolean expressions. DO NOT SIMPLIFY!  
	a. <a style="text-decoration:overline;color:#000000;">(A + B)</a> + (A + B)
	![[drawing1 4.png]]
	
	b. <a style="text-decoration:overline;color:#000000;border-bottom: 1px solid;">(A + B) × </a><span style="border-top:8px double">A</span> × (B + A)
![[drawing2 6.png]]

3. For the following logic circuit:   

![](https://lh5.googleusercontent.com/LCx7Uk-jMDxfXmXFWxiYz-V5prdMxQWJzJ-Nvxqy_tfOg5367z4ovB9NloYgvH_GFsQ6kwzIzHkSaQGRmUIRbEXlwDPElRUtbSC2hY4yGtkXOTZLFHAYSmHlx3lavbnUOYSWgMLy)

a. Find an equivalent Boolean expression 

- (A + B) + (A × B) = F

b. Reduce the expression to its simplest form 

- (A + B) + (A × B) = 
- ((A + B) + A) × ((A + B) + B) = 
- (A + B) × (A + B) = 
- (A + B)

c. Convert the simple expression into a logic circuit that is equivalent to the original circuit.  

![[drawing3 1.png]]

4. Complete the truth table to show that <a style="text-decoration:overline;color:#000000;">(A × B)</a> = <a style="text-decoration:overline;color:#000000;">A</a> + <a style="text-decoration:overline;color:#000000;">B</a>

|  A  |  B  | (A × B) | <a style="text-decoration:overline;color:#000000;">(A × B)</a> | <a style="text-decoration:overline;color:#000000;">A</a> | <a style="text-decoration:overline;color:#000000;">B</a> | <a style="text-decoration:overline;color:#000000;">A</a> + <a style="text-decoration:overline;color:#000000;">B</a> |     |     |     |     |     |
|:---:|:---:|:-------:|:--------------------------------------------------------------:|:--------------------------------------------------------:|:--------------------------------------------------------:|:-------------------------------------------------------------------------------------------------------------------:|
|  1  |  1  |    1    |                               0                                |           0    |    0       |      0                                                                                                               |
|  1  |  0  |    0    |                               1                                |           0    |    1       |      1                                                                                                               |
|  0  |  1  |    0    |                               1                                |           1    |    0       |       1                                                                                                              |
|  0  |  0  |    0    |                               1                                |           1    |    1       |      1                                                                                                               |
