#include <iostream>
#include <vector>
using namespace std;

int main() {

    // initialization / declaration
    vector<int> v;
    vector<int> v1(5);
    vector<int> v2(5, 10);
    vector<int> v3 = {1, 2, 3, 4, 5};

    // display initial vectors
    for (int x : v3) cout << x << " ";

    return 0;
}