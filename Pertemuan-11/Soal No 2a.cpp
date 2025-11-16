#include <iostream>
using namespace std;

int main() {
    int a, N;

    cout << "Masukkan N: ";
    cin >> N;
    cout << "Masukkan a: ";
    cin >> a;

    if (a > N) {
        cout << "Error: a harus <= N" << endl;
        return 0;
    }

    for (int i = a; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;

}
