#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    size_t n;
    cin >> n;
    vector<int> arr(n, 0);
    for (size_t i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    size_t q;
    cin >> q;
    for (size_t i = 0; i < q; i++) {
        int a;
        cin >> a;
        auto it = lower_bound(arr.begin(), arr.end(), a);
        if (it == arr.end() || *it != a) {
            cout << "No ";
        } else {
            cout << "Yes ";
        }
        cout << it - arr.begin() + 1 << "\n";
    }
    return 0;
}
