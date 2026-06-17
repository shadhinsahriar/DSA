#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {10, 20, 30, 40};

    // 1. insert at beginning
    v.insert(v.begin(), 100);  
    // 100 10 20 30 40

    // 2. insert at specific index i (BEFORE i)
    int i = 2;
    v.insert(v.begin() + i, 99);  
    // 100 10 99 20 30 40

    // 3. insert AFTER index i
    i = 3;
    v.insert(v.begin() + i + 1, 77);  
    // after index 3

    // 4. insert at end (same as push_back)
    v.insert(v.end(), 500);  
    // adds at last

    // 5. insert multiple copies at position
    v.insert(v.begin() + 1, 3, 50);
    // insert 50, 50, 50 at index 1

    // 6. insert from another vector (range insert)
    vector<int> a = {1, 2, 3};
    v.insert(v.begin() + 2, a.begin(), a.end());

    // 7. insert from initializer list
    v.insert(v.begin(), {7, 8, 9});

    // print
    for (int x : v) cout << x << " ";

    return 0;
}