#include <iostream>
using namespace std;

int main() {
    int a, b, step;

    cout << "Input a: ";
    if (!(cin >> a)) return 0;
    cout << "Input b: ";
    if (!(cin >> b)) return 0;
    cout << "Input increment value: ";
    if (!(cin >> step) || step <= 0) { cout << "step harus > 0\n"; return 0; }

    if (a <= b) {                 // naik
        for (int i = a; i <= b; i += step) {
            if (i != a) cout << ' ';
            cout << i;
        }
    } else {                      // turun
        for (int i = a; i >= b; i -= step) {
            if (i != a) cout << ' ';
            cout << i;
        }
    }
    cout << '\n';

}
