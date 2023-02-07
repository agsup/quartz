#OOP
## Things to know:

### Signatures for operators
```c++
bool operator == (Fee lhs, Fum rhs); // this has to be outside of the class

class Fee {
	// Conversions
	Fee (Fum fum);     // Fum -> Fee
	Fee operator(Fum); // Fee -> Fum
	// Methods
	Fee  operator +(Fee rhs) const;
	Fee  operator -(Fee rhs) const;
	Fee  operator +(Fum rhs) const;
	Fee  operator -(Fum rhs) const;

	Fee& operator += (Fee src);
	Fee& operator -= (Fee src);
	Fee& operator += (Fum src);
	Fee& operator -= (Fum src);

	Fee& operator++();          // prefix
	Fee  operator++(int);       // postfix
	
}

// These are required to be outside the flass
std::ostream& operator << (std::ostream& out, Fee rhs); // not referernce because Fee is being read
std::istream& operator >> (std::istream& in, Fee& rhs); // reference because Fee is being modified
```
### Ordering
- Strong Ordering
	- Greater than, Less than, Equal to
- Weak Ordering
	- Also includes Equivalence (value is same but not equal objects)
- Partial Ordering
	- Accounts for unsortables (like NaN)
### Spaceship (`<=>`)
- Takes place of lt, gt, lte, gte, but <b>NOT</b> equality
- Default implementation (for equals as well) is lexicographical (Looks through each part to determine equality/inequality ordering)
### Know difference between implicit/explicit conversions
- Rule of thumb: if it looks like a constructor call or a typecast, it is an explicit conversion
- If it looks like it should require uniform type, but accepts it anyway, it is implicit
### Copying/Moving
- Copy L-Values, Move R-Values
- `std::move()`
	- Makes its argument an R-val
- `std::swap()`
	- Easy way of moving x to temp, y to x, temp to y
- You only get a default move if you don't write any of the other "Gang of 5" functions, which are...
	- Move constructor
	- Copy constructor
	- Move assignment
	- Copy assignment
	- Destructor
- Differentiating L and R values
	- Can you access this exact thing again?
		- If yes, it is an L-value
		- Otherwise, it is an R-value
		- Ex. after `x = 5`, x is an L-value, but `x + 5` is an R-value (cannot access it again without recalculating it)
	- When moving from a variable, the variable that had its data stolen is <b>partially formed</b> 
- L/R Value References:
	- L-val ref only refers to an L-val (`&`)
	- R-val ref only refers to an R-val (`&&`)