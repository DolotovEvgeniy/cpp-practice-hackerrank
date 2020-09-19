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
    for (size_t i = 0; i < n; i++) {
        cin >> arr[i];
    }
    size_t x, a, b;
    cin >> x >> a >> b;
    x--;
    a--;
    b--;
    arr.erase(arr.begin() + x);
    arr.erase(arr.begin() + a, arr.begin() + b);
    cout << arr.size() << "\n";
    for (int c : arr) {
        cout << c << " ";
    }
    return 0;
}
