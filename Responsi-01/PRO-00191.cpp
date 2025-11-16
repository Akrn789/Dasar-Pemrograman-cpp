#include <iostream>
using namespace std;

int main() {
    string nama1, nama2, namaPembeli;
    string mobil1, mobil2, namaMobil, jenisMobil, satuanJual;
    int tahunProduksi, jumlahMobil, jumlahJual;
    char langganan;
    long long hargaJual, totalJual, diskon, totalSetelahDiskon;
    long long totalSemua = 0, pajak, totalAkhir;
    string bonus;

    cout << "PROGRAM PENJUALAN MOBIL" << endl;
    cout << "======================================" << endl;
    cout << "Jumlah Mobil yang dijual   : ";
    cin >> jumlahMobil;
    cout << "Nama Pembeli: ";
    cin >> nama1 >> nama2;
    namaPembeli = nama1 + " " + nama2;
    cout << "Apakah Pembeli Langganan [Y/T]: ";
    cin >> langganan;
    cout << "--------------------------------------" << endl;

    for (int i = 1; i <= jumlahMobil; i++) {
        cout << "Mobil ke-" << i << endl;
        cout << "Nama Mobil     : ";
        cin >> mobil1 >> mobil2;
        namaMobil = mobil1 + " " + mobil2;
        cout << "Jenis Mobil    : ";
        cin >> jenisMobil;
        cout << "Tahun Produksi : ";
        cin >> tahunProduksi;
        cout << "Satuan Jual    : ";
        cin >> satuanJual;
        cout << "Harga Jual     : Rp ";
        cin >> hargaJual;
        cout << "Jumlah Jual    : ";
        cin >> jumlahJual;

        totalJual = hargaJual * jumlahJual;
        diskon = 0;

        if (jumlahJual > 2)
            diskon = totalJual * 0.15;
        if (langganan == 'Y' || langganan == 'y')
            diskon += totalJual * 0.10;

        totalSetelahDiskon = totalJual - diskon;

        cout << "Total Jual      : Rp " << totalJual << ".00" << endl;
        cout << "Diskon          : Rp " << diskon << ".00" << endl;
        cout << "Total Setelah Diskon: Rp " << totalSetelahDiskon << ".00" << endl;
        cout << "--------------------------------------" << endl;

        totalSemua += totalSetelahDiskon;

    }

    pajak = totalSemua * 0.10;
    totalAkhir = totalSemua + pajak;
    bonus = (totalSemua > 200000000)? "SARUNG COVER MOBIL" : "TISSUE KABIN";

    cout << "=====================================" << endl;
    cout << "Nama Pembeli        : " << namaPembeli << endl;
    cout << "Langganan           : " << langganan << endl;
    cout << "Jumlah Mobil        : " << jumlahMobil << endl;
    cout << "Total Harga Mobil   : Rp " << totalSemua << ".00" << endl;
    cout << "Pajak 10%           : Rp " <<  pajak << ".00" << endl;
    cout << "Total Akhir         : Rp " << totalAkhir << ".00" << endl;
    cout << "Bonus               : " << bonus << endl;
    cout << "=====================================" << endl;

    return 0;
}
