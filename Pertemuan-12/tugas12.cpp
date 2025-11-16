#include <iostream>
using namespace std;

int main() {
    int n, angka, terbesar;
    int pilih;

    cout << "=== Program Mencari Angka Terbesar ===" << endl;
    cout << "Pilihan metode perulangan: " << endl;
    cout << "1. FOR" << endl;
    cout << "2. WHILE" << endl;
    cout << "Masukkan pilihan (1/2): ";
    cin >> pilih;

    cout << "\nMasukkan jumlah angka: ";
    cin >> n;

    cout << "Angka 1 : ";
    cin >> angka;
    terbesar = angka;

    if (pilih == 1) {
        for (int i = 2; i <= n; i++) {
            cout << "Angka " << i << " : ";
            cin >> angka;
            if (angka > terbesar)
                terbesar = angka;
        }
    }
    else if (pilih == 2) {
        int i = 2;
        while (i <= n) {
            cout << "Angka " << i << " : ";
            cin >> angka;
            if (angka > terbesar)
                terbesar = angka;
            i++;
        }
    }
    else {
        cout << "Pilihan tidak valid!" << endl;
        return 0;
    }
    cout << "\nAngka terbesar adalah : " << terbesar << endl;

    return 0;
}
