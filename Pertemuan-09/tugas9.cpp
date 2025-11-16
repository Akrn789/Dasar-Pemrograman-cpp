#include <iostream>
#include <string>
using namespace std;

int main() {
    string jenis;
    string metode;
    string member;
    int jumlah;
    int diskon = 0;

    cout << "=== Program Menghitung Diskon Toko ===" << endl;
    cout << "Masukkan jenis barang  : ";
    cin >> jenis;
    cout << "Apakah Anda member?    : ";
    cin >> member;
    cout << "Masukkan jumlah barang : ";
    cin >> jumlah;
    cout << "Metode pembayaran      : ";
    cin >> metode;

    if (jenis == "elektronik") {
        if (member == "ya" && jumlah > 10 && metode == "cash")
            diskon = 15;
        else if (member == "ya" && jumlah <= 10 && metode == "cash")
            diskon = 12;
        else if (member == "tidak" && jumlah > 10 && metode == "kredit")
            diskon = 8;
        else
            diskon = 0;
    }
    else if (jenis == "pakaian") {
        if (member == "ya" && jumlah > 10 && metode == "cash")
            diskon = 10;
        else if (member == "tidak" && jumlah <= 10 && metode == "cash")
            diskon = 5;
        else
            diskon = 0;
    }
    else if (jenis == "makanan") {
        diskon = 2;
    }
    else {
        cout << "Jenis barang tidak dikenali!" << endl;
        return 0;
    }

    cout << "--------------------------------------" << endl;
    cout << "Jenis Barang          : " << jenis << endl;
    cout << "Status Member         : " << member << endl;
    cout << "Jumlah Barang         : " << jumlah << endl;
    cout << "Metode Pembayaran     : " << metode << endl;
    cout << "Total Diskon          : " << diskon << " %" << endl;
    return 0;
}
