#include <iostream>
using namespace std;

int main() {
    cout << "===== DATA MPP MAHASISWA =====" << endl;

    string nama = "Ahmad Kurniawan";
    cout << "Nama         : " << nama << endl;

    string nim = "A18.2025.00191";
    cout << "NIM          : " << nim << endl;

    int umur = 27;
    cout << "Umur         : " << umur << endl;

    char gender = 'L';
    cout << "Gender       : " << gender << endl;

    bool aktif = true;
    cout << "Status       : " << aktif << endl;

    const string kampus = "UDINUS";
    cout << "Kampus       : " << kampus << endl;

    const int tahunMasuk = 2025;
    cout << "Tahun Masuk  : " << tahunMasuk << endl;

    float saldo = 1234.56;
    cout << "Saldo        : " << saldo << endl;

    double tabungan = 1234500000;
    cout << "Tabungan     : " << tabungan << endl;

    return 0;
}
