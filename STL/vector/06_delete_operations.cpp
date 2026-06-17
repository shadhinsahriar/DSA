#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v = {10, 20, 30, 40, 50};

    // 1. delete last element
    v.pop_back();
    // 10 20 30 40

    // 2. delete element at specific index i
    int i = 1;
    v.erase(v.begin() + i);
    // 10 30 40

    // 3. delete first element
    v.erase(v.begin());
    // 30 40

    // 4. delete last element using erase
    v.erase(v.end() - 1);
    // 30

    // 5. delete range [start, end)
    vector<int> a = {10, 20, 30, 40, 50, 60};
    a.erase(a.begin() + 1, a.begin() + 4);
    // 10 50 60

    // 6. delete all occurrences of a value
    vector<int> b = {10, 20, 10, 30, 10, 40};

    b.erase(
        remove(b.begin(), b.end(), 10),
        b.end()
    );
    // 20 30 40

    // 7. delete elements by condition
    vector<int> c = {1, 2, 3, 4, 5, 6};

    c.erase(
        remove_if(
            c.begin(),
            c.end(),
            [](int x) { return x % 2 == 0; }
        ),
        c.end()
    );
    // 1 3 5

    // 8. delete all elements
    vector<int> d = {10, 20, 30};

    d.clear();
    // {}

    // 9. delete elements from end using resize
    vector<int> e = {10, 20, 30, 40, 50};

    e.resize(3);
    // 10 20 30

    // print example vector
    for (int x : b) cout << x << " ";

    return 0;
}