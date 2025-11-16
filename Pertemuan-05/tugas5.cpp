#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan sebuah angka integer: ";
    cin >> angka;

    // Operasi Aritmatika: modulus 10 untuk ambil digit terakhir

    int digitTerakhir = angka % 10;
    cout << "Angka terakhir dari " << angka << " adalah: " << digitTerakhir << endl;

    // Operasi Logika: if-else untuk cek genap atau ganjil

    if (digitTerakhir % 2 == 0) {
        cout << "Digit terakhir adalah bilangan genap. " << endl;
    } else {
        cout << "Digit terakhir adalah bilangan ganjil. " << endl;
    }

    return 0;
}
