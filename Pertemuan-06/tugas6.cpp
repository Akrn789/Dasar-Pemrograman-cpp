#include <iostream>
using namespace std;

int main() {
    int uang;
    cout << "Masukkan jumlah uang: ";
    cin >> uang;

    // Operasi Aritmatika: memecah jumlah uang jadi ribuan, ratusan, puluhan, satuan

    int ribuan  = uang / 1000;
    int ratusan = (uang % 1000) / 100;
    int puluhan = (uang % 100) / 10;
    int satuan  = uang % 10;

    cout << "Jumlah uangnya: " << uang << endl;
    cout << "Ribuan        : " << ribuan << endl;
    cout << "Ratusan       : " << ratusan << endl;
    cout << "Puluhan       : " << puluhan << endl;
    cout << "Satuan        : " << satuan << endl;

    // Operasi Logika: if - else if - else

    if (uang >= 10000) {
        cout << "Kategori: Uang banyak" << endl;
    } else if (uang >= 1000) {
        cout << "Kategori: Uang sedang" << endl;
    } else {
        cout << "Kategori: Uang sedikit" << endl;
    }

    return 0;
}
