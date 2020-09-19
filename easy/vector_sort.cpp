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
    sort(arr.begin(), arr.end());
    for (int a : arr) {
        cout << a << " ";
    }

    return 0;
}
