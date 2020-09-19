#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    size_t n, q;
    cin >> n >> q;

    vector<vector<int>> arr;

    for (size_t i = 0; i < n; i++) {
        size_t k;
        cin >> k;
        vector<int> tmp(k, 0);
        for (size_t j = 0; j < k; j++) {
            cin >> tmp[j];
        }
        arr.push_back(tmp);
    }

    for (size_t i = 0; i < q; i++) {
        size_t a, b;
        cin >> a >> b;
        cout << arr[a][b] << "\n";
    }
    return 0;
}
