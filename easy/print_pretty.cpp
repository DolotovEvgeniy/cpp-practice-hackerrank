#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;

        cout << nouppercase << setw(0) << showbase << hex << (unsigned long)A << "\n";
        cout << setfill('_') << setw(15) << right << setprecision(2) << fixed << showpos << B << "\n";
        cout << noshowpos << setw(0) << uppercase << scientific << setprecision(9) << C << "\n";


    }
    return 0;
}
