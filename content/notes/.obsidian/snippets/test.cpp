#include <iostream>
#include <vector>
using namespace std;

void addall(vector<int>& i) {
    for (int x = 0; x < i.size(); x++) {
        i[x]++;
    }
}

int main() {


    vector<int> i = { 1, 2, 3, 4, 5, 6, 7 };
    addall(i);

    for (int x : i) {
        cout << x << endl;
    }
}