#DataStructures #Spring2022 
*For some more detail, observe [[set_example.cpp|set example file]]*

## Weird names for stuff
- Add = Insert
- Remove = Delete
- Search = Count
- Union = Unique from both sets
- Intersection = only common from both sets
- Difference = Different from first set (ex. a - b = diff in a, b - a = diff in b, etc.)
## Count
- Returns number of occurrences
- can be used as a search
- can be used as a counter (obviously)
## Unions
- function is set_union
- takes (set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(set3.begin(), set3.end()))
## Iteration
- has to use a __set__<__int__>__::iterator__ or __set__<__int__>__::reverse_iterator__ 
- forward iterator is fit, reverse iterator is rit
- formatting:

```c++
for (fit = set1.begin(), fit != set1.end(), fit++) {}
for (rit = set1.rbegin(), rit != set1.rend(), rit++) {}
```
