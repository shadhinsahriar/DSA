#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {10, 20, 30, 40, 50};

    // 1. index based output
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    // 2. range-based loop (most used in CP)
    for (int x : v) {
        cout << x << " ";
    }
    cout << "\n";

    // 3. iterator based loop
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    // 4. reverse traversal (index)
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    cout << "\n";

    // 5. reverse iterator
    for (auto it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}