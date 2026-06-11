#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {10, 20, 30, 40, 50};

    // 1. direct index access
    cout << v[0] << "\n";
    cout << v[2] << "\n";

    // 2. at() safe access (bounds checked)
    cout << v.at(1) << "\n";

    // 3. front element
    cout << v.front() << "\n";

    // 4. last element
    cout << v.back() << "\n";

    // 5. pointer access
    int* p = v.data();
    cout << p[0] << "\n";
    cout << p[3] << "\n";

    return 0;
}