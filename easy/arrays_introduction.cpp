#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    size_t n;
    cin >> n;

    std::vector<int> arr(n, 0);
    for (size_t i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = arr.size() - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}
