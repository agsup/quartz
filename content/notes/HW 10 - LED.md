#ArchAssembly
# An application of Karnaugh Maps
A digital circuit is needed to control a seven-segment LED display of decimal digits, as shown below. The circuit has four inputs (A, B, C & D), which provide the 4-bit binary code used in packed decimal representation (010 = 0000, 110 = 0001, ... 910 = 1001). The seven output Boolean expressions define which LED lights will be activated to display a given decimal digit. Note that some combinations of inputs and outputs are not needed and, consequently, are marked with a ‘d’ (don’t care).
![[Pasted image 20220420132854.png]]  
![[Pasted image 20220420133210.png]]
##### Truth Table for digital circuit:

| Input |     |     |     |    Output     |               |               |               |               |               |               |
|:-----:|:---:|:---:|:---:|:-------------:|:-------------:|:-------------:|:-------------:|:-------------:|:-------------:|:-------------:|
|   A   |  B  |  C  |  D  | z<sub>1</sub> | z<sub>2</sub> | z<sub>3</sub> | z<sub>4</sub> | z<sub>5</sub> | z<sub>6</sub> | z<sub>7</sub> |
|   0   |  0  |  0  |  0  |       1       |       1       |       1       |       0       |       1       |       1       |       1       |
|   0   |  0  |  0  |  1  |       0       |       0       |       1       |       0       |       0       |       1       |       0       |
|   0   |  0  |  1  |  0  |       1       |       0       |       1       |       1       |       1       |       0       |       1       |
|   0   |  0  |  1  |  1  |       1       |       0       |       1       |       1       |       0       |       1       |       1       |
|   0   |  1  |  0  |  0  |       0       |       1       |       1       |       1       |       0       |       1       |       0       |
|   0   |  1  |  0  |  1  |       1       |       1       |       0       |       1       |       0       |       1       |       1       |
|   0   |  1  |  1  |  0  |       1       |       1       |       0       |       1       |       1       |       1       |       1       |
|   0   |  1  |  1  |  1  |       1       |       0       |       1       |       0       |       0       |       1       |       0       |
|   1   |  0  |  0  |  0  |       1       |       1       |       1       |       1       |       1       |       1       |       1       |
|   1   |  0  |  0  |  1  |       1       |       1       |       1       |       1       |       0       |       1       |       0       |
|   1   |  0  |  1  |  0  |       d       |       d       |       d       |       d       |       d       |       d       |       d       |
|   1   |  0  |  1  |  1  |       d       |       d       |       d       |       d       |       d       |       d       |       d       |
|   1   |  1  |  0  |  0  |       d       |       d       |       d       |       d       |       d       |       d       |       d       |
|   1   |  1  |  0  |  1  |       d       |       d       |       d       |       d       |       d       |       d       |       d       |
|   1   |  1  |  1  |  0  |       d       |       d       |       d       |       d       |       d       |       d       |       d       |
|   1   |  1  |  1  |  1  |       d       |       d       |       d       |       d       |       d       |       d       |       d       |

Find the simplified SOP (Sum Of Products) expression for each of the outputs, z<sub>2</sub> through z<sub>7</sub>. (The expression for z<sub>1</sub> has already been done.) Using the truth table on the 1st page, you will need to fill in the tables for z<sub>5</sub> through z<sub>7</sub>. Since we don’t care what output results in those squares occupied by ‘d’, you may treat them as a 1 or 0 - whichever leads to a simpler SOP expression.

##### z<sub>1</sub>:
- 
| AB/CD | 00  | 01  | 11  | 10  |
|:-----:|:---:|:---:|:---:|:---:|
|  00   |  1  |     |  1  |  1  |
|  01   |     |  1  |  1  |  1  |
|  11   |  d  |  d  |  d  |  d  |
|  10   |  1  |  1  |  d  |  d  |
- z<sub>1</sub> = A + C + BD + <a style="text-decoration:overline;color:#000000;">BD</a>

##### z<sub>2</sub>:
- 
| AB/CD | 00  | 01  | 11  | 10  |
|:-----:|:---:|:---:|:---:|:---:|
|  00   |  1  |     |     |     |
|  01   |  1  |  1  |     |  1  |
|  11   |  d  |  d  |  d  |  d  |
|  10   |  1  |  1  |  d  |  d  |
- z<sub>2</sub> = B<a style="text-decoration:overline;color:#000000;">C</a> + A<a style="text-decoration:overline;color:#000000;">C</a> + <a style="text-decoration:overline;color:#000000;">CD</a> + B<a style="text-decoration:overline;color:#000000;">D</a>

##### z<sub>3</sub>:
- 
| AB/CD | 00  | 01  | 11  | 10  |
|:-----:|:---:|:---:|:---:|:---:|
|  00   |  1  |  1  |  1  |  1  |
|  01   |  1  |     |  1  |     |
|  11   |  d  |  d  |  d  |  d  |
|  10   |  1  |  1  |  d  |  d  |
- z<sub>3</sub> = <a style="text-decoration:overline;color:#000000;">B</a> + <a style="text-decoration:overline;color:#000000;">CD</a> + CD

##### z<sub>4</sub>:
- 
| AB/CD | 00  | 01  | 11  | 10  |
|:-----:|:---:|:---:|:---:|:---:|
|  00   |     |     |  1  |  1  |
|  01   |  1  |  1  |     |  1  |
|  11   |  d  |  d  |  d  |  d  |
|  10   |  1  |  1  |  d  |  d  |
- z<sub>4</sub> = B<a style="text-decoration:overline;color:#000000;">C</a> + A + <a style="text-decoration:overline;color:#000000;">B</a>C + C<a style="text-decoration:overline;color:#000000;">D</a> 

##### Recall, for the next 3 outputs you need to retrieve the 1’s from the truth table and insert them in the tables.

##### z<sub>5</sub>:  
- 
| AB/CD | 00  | 01  | 11  | 10  |
|:-----:|:---:|:---:|:---:|:---:|
|  00   |  1  |     |     |  1  |
|  01   |     |     |     |  1  |
|  11   |  d  |  d  |  d  |  d  |
|  10   |  1  |     |  d  |  d  |
- z<sub>5</sub> = C<a style="text-decoration:overline;color:#000000;">D</a> + <a style="text-decoration:overline;color:#000000;">BD</a> 
##### z<sub>6</sub>: 
- 
| AB/CD | 00  | 01  | 11  | 10  |
|:-----:|:---:|:---:|:---:|:---:|
|  00   |  1  |  1  |  1  |     |
|  01   |  1  |  1  |  1  |  1  |
|  11   |  d  |  d  |  d  |  d  |
|  10   |  1  |  1  |  d  |  d  |
- z<sub>6</sub> = B + D + <a style="text-decoration:overline;color:#000000;">C</a> 
##### z<sub>7</sub>: 
- 
| AB/CD | 00  | 01  | 11  | 10  |
|:-----:|:---:|:---:|:---:|:---:|
|  00   |  1  |     |  1  |  1  |
|  01   |     |  1  |     |  1  |
|  11   |  d  |  d  |  d  |  d  |
|  10   |  1  |     |  d  |  d  |
- z<sub>7</sub> = <a style="text-decoration:overline;color:#000000;">BD</a> + <a style="text-decoration:overline;color:#000000;">B</a>C + B<a style="text-decoration:overline;color:#000000;">C</a>D + C<a style="text-decoration:overline;color:#000000;">D</a> 