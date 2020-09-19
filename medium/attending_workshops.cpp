#include<bits/stdc++.h>

using namespace std;

#include <algorithm>

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshop {
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops {
    Available_Workshops(int n)
        : n(n)
        , arr(new Workshop[n])
    {}

    int n;
    Workshop* arr;
};

Available_Workshops* initialize(const int* start_time, const int* duration, int n) {
    Available_Workshops* ptr = new Available_Workshops(n);
    for (int i = 0; i < n; i++) {
        ptr->arr[i].start_time = start_time[i];
        ptr->arr[i].duration = duration[i];
        ptr->arr[i].end_time = start_time[i] + duration[i];
    }
    sort(ptr->arr, ptr->arr + ptr->n,
        [](const auto& lhs, const auto& rhs) {
            return lhs.start_time < rhs.start_time;
        }
    );
    return ptr;
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    std::map<int, int> startTimeToIndex;
    for (int i = ptr->n - 1; i >= 0; i--) {
        startTimeToIndex[ptr->arr[i].start_time] = i;
    }
    std::map<int, int> next;
    for (int i = 0; i < ptr->n; i++) {
        auto it = startTimeToIndex.lower_bound(ptr->arr[i].end_time);
        if (it != startTimeToIndex.end()) {
            next[i] = it->second;
        } else {
            next[i] = ptr->n;
        }
    }
    int* f = new int[ptr->n + 1];
    f[ptr->n] = 0;
    for (int i = ptr->n - 1; i >= 0; i--) {
        f[i] = max(f[i + 1], 1 + f[next[i]]);
    }
    return f[0];
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
