#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;

    cout << "Masukkan Jumlah Data Obat (Minimal 5): ";
    cin >> n;
    if (n < 5) n = 5;

    char kode[100][10];
    char nama[100][20];
    char satuan[100][15];
    int jumlah[100];
    int harga[100];
    int total[100];

    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << endl;
        cout << "Kode      : ";
        cin >> kode[i];
        cout << "Nama Obat : ";
        cin >> nama[i];
        cout << "Satuan    : ";
        cin >> satuan[i];
        cout << "Jumlah    : ";
        cin >> jumlah[i];
        cout << "Harga     : ";
        cin >> harga[i];

        total[i] = jumlah[i] * harga[i];
        cout << endl;
    }

    int totalJumlah = 0;
    int totalHarga = 0;
    int totalSemua = 0;

    for (int i = 0; i < n; i++) {
        totalJumlah += jumlah[i];
        totalHarga += harga[i];
        totalSemua += total[i];
    }

    cout << endl;

    cout << "Laporan Data Obat" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << left
         << setw(4)  << "No"
         << setw(15) << "Nama Obat"
         << setw(12) << "Satuan"
         << setw(8)  << "Jumlah"
         << setw(10) << "Harga"
         << setw(10) << "Total" << endl;
    cout << "---------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << left << setw(4)  << i + 1
             << left << setw(15) << nama[i]
             << left << setw(12) << satuan[i]
             << left << setw(8)  << jumlah[i]
             << left << setw(10) << harga[i]
             << left << setw(10) << total[i]
             << endl;
    }

    cout << "---------------------------------------------------------" << endl;

    cout << left << setw(31) << "Total :"
         << left << setw(8)  << totalJumlah
         << left << setw(10) << totalHarga
         << left << setw(10) << totalSemua
         << endl;

    return 0;
}
