#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    // 1. normal input using push_back
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // 2. direct indexed input (pre-sized vector)
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 3. input using emplace_back (same as push_back)
    vector<int> b;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        b.emplace_back(x);
    }

    return 0;
}