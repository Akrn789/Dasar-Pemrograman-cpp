#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Masukkan a: ";
    cin >> a;
    cout << "Masukkan b: ";
    cin >> b;

    if (b < a) {
        cout << "Error: b harus >= a" << endl;
        return 0;
    }

    for (int i = b; i >= a; i--) {
        cout << i << " ";
    }
    cout << endl;

}
