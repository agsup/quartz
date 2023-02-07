#DataStructures

```cpp
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    set<int> set1, set2, set3, set4, set5, set6;

    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int temp;
        cin >> temp;
        set1.insert(temp);
    }

    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int temp;
        cin >> temp;
        set2.insert(temp);
    }

    cout << "Set 1: ";
    for (set<int>::iterator fit = set1.begin(); fit != set1.end(); fit++)
    {
        cout << *fit << " ";
    }
    cout << endl;

    cout << "Set 2: ";
    for (set<int>::iterator fit = set2.begin(); fit != set2.end(); fit++)
    {
        cout << *fit << " ";
    }
    cout << endl;

    // * union
    set_union(set1.begin(), set1.end(),
              set2.begin(), set2n()));

    // * intersection
    set_intersection(set1.begin(), set1.end(),
                     set2.begin(), set2.end(),
                     inserter(set4, set4.begin()));

    // * difference
    set_difference(set1.begin(), set1.end(),
                   set2.begin(), set2.end(),
                   inserter(set5, set5.begin()));

    set_difference(set2.begin(), set2.end(),
                   set1.begin(), set1.end(),
                   inserter(set6, set6.begin()));

    cout << "Union: ";
    for (set<int>::iterator fit = set3.begin(); fit != set3.end(); fit++)
    {
        cout << *fit << " ";
    }
    cout << endl;

    cout << "Intersection: ";
    for (set<int>::iterator fit = set4.begin(); fit != set4.end(); fit++)
    {
        cout << *fit << " ";
    }
    cout << endl;

    cout << "Difference12: ";

    for (set<int>::iterator fit = set5.begin(); fit != set5.end(); fit++)
    {
        cout << *fit << " ";
    }
    cout << endl;

    cout << "Difference21: ";
    for (set<int>::iterator fit = set6.begin(); fit != set6.end(); fit++)
    {
        cout << *fit << " ";
    }
    cout << endl;
}
```

