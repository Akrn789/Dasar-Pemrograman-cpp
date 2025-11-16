#include <iostream>
using namespace std;

int main() {

    for (int i = 5; i >= 1; i--) {
        for (int j = 10; j >= 10 - i + 1; j--)
            cout << j << " ";
        cout << endl;
    }

    cout << endl;

    int baris = 5;
    while (baris >= 1) {
        int angka = 10;
        int hitung = baris;

        while (hitung > 0) {
            cout << angka << " ";
            angka--;
            hitung--;
        }

        cout << endl;
        baris--;
    }

    cout << endl;

    int x = 5;
    do {
        int y = 10;
        int ulang = x;

        do {
            cout << y << " ";
            y--;
            ulang--;
        } while (ulang > 0);

        cout << endl;
        x--;
    } while (x >= 1);

    return 0;
}
