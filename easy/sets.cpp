#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    size_t q;
    cin >> q;
    set<int> arr;
    for (size_t i = 0; i < q; i++) {
        int type;
        cin >> type;
        int elem;
        cin >> elem;
        switch (type) {
            case 1: arr.insert(elem); break;
            case 2: arr.erase(elem); break;
            case 3: cout << (arr.count(elem) ? "Yes\n" : "No\n"); break;
        }
    }
    return 0;
}
