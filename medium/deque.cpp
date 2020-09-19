#include <iostream>
#include <deque>
using namespace std;


void printKMax(int arr[], int n, int k) {
    deque<int> indices(k);
    for (int i = 0; i < k; i++) {
        while (!indices.empty() && arr[i] >= arr[indices.back()]) {
            indices.pop_back();
        }
        indices.push_back(i);
    }
    for (int i = k; i < n; i++) {
        cout << arr[indices.front()] << " ";
        while (!indices.empty() && indices.front() <= i - k) {
            indices.pop_front();
        }
        while (!indices.empty() && arr[i] >= arr[indices.back()]) {
            indices.pop_back();
        }
        indices.push_back(i);
    }

    cout << arr[indices.front()] << "\n";
}


int main(){
    int t;
    cin >> t;
    while(t>0) {
        int n,k;
        cin >> n >> k;
        int i;
        int arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
