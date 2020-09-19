#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    size_t q;
    cin >> q;
    map<string, int> marks;

    for (size_t i = 0; i < q; i++) {
        int type;
        string name;
        cin >> type >> name;
        switch (type) {
            case 1:
                int mark;
                cin >> mark;
                marks[name] += mark;
                break;
            case 2:
                marks.erase(name);
                break;
            case 3:
                auto it = marks.find(name);
                if (it == marks.end()) {
                    cout << 0;
                } else {
                    cout << it->second;
                }
                cout << "\n";
                break;
        }
    }
    return 0;
}
