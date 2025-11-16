#include <iostream>
using namespace std;

int main() {

    int jmlMobil;
    string namaDepan, namaBelakang;
    char langganan;

    cout << "PROGRAM PENYEWAAN/RENTAL MOBIL" << endl;
    cout << "=============================================" << endl;
    cout << "Jumlah Mobil yang disewa       : ";
    cin >> jmlMobil;

    cout << "Nama Pembeli                   : ";
    cin >> namaDepan >> namaBelakang;

    cout << "Apakah Pembeli Langganan [Y/T] : ";
    cin >> langganan;

    long long totalSewaSemua = 0;
    long long totalSetelahDiskonSemua = 0;
    int maxLamaSewa = 0;

    for (int i = 1; i <= jmlMobil; i++) {

        string namaMobil, jenisMobil, satuan = "unit";
        int tahun, lamaSewa;
        long long hargaPerHari;
        long long totalHarga, diskonLangganan, totalSetelahDiskonMobil;

        cout << "---------------------------------------------" << endl;
        cout << "Mobil ke-" << i << endl;

        cout << "Nama Mobil          : ";
        cin >> namaMobil;

        if (namaMobil == "Avanza" || namaMobil == "avanza") {
            jenisMobil   = "MPV";
            tahun        = 2015;
            hargaPerHari = 250000;

            cout << "Jenis Mobil         : " << jenisMobil << endl;
            cout << "Tahun Produksi      : " << tahun << endl;
            cout << "Satuan              : " << satuan << endl;
            cout << "Harga Sewa/Hari     : Rp " << hargaPerHari << endl;
        }
        else if (namaMobil == "Xenia" || namaMobil == "xenia") {
            jenisMobil   = "MPV";
            tahun        = 2014;
            hargaPerHari = 200000;

            cout << "Jenis Mobil         : " << jenisMobil << endl;
            cout << "Tahun Produksi      : " << tahun << endl;
            cout << "Satuan              : " << satuan << endl;
            cout << "Harga Sewa/Hari     : Rp " << hargaPerHari << endl;
        }
        else if (namaMobil == "Altis" || namaMobil == "altis") {
            jenisMobil   = "Sedan";
            tahun        = 2013;
            hargaPerHari = 275000;

            cout << "Jenis Mobil         : " << jenisMobil << endl;
            cout << "Tahun Produksi      : " << tahun << endl;
            cout << "Satuan              : " << satuan << endl;
            cout << "Harga Sewa/Hari     : Rp " << hargaPerHari << endl;
        }
        else {
            cout << "Jenis Mobil         : ";
            cin >> jenisMobil;

            cout << "Tahun Produksi      : ";
            cin >> tahun;

            cout << "Satuan              : ";
            cin >> satuan;

            cout << "Harga Sewa/Hari     : Rp ";
            cin >> hargaPerHari;
        }

        cout << "Lama Sewa (hari)    : ";
        cin >> lamaSewa;

        if (lamaSewa > maxLamaSewa)
            maxLamaSewa = lamaSewa;

        totalHarga = hargaPerHari * lamaSewa;
        totalSewaSemua += totalHarga;

        if (langganan == 'Y' || langganan == 'y')
            diskonLangganan = totalHarga * 10 / 100;
        else
            diskonLangganan = 0;

        totalSetelahDiskonMobil = totalHarga - diskonLangganan;
        totalSetelahDiskonSemua += totalSetelahDiskonMobil;

        cout << "Total Harga Sewa    : Rp " << totalHarga << ".00" << endl;
        cout << "Diskon 10%          : Rp " << diskonLangganan << ".00" << endl;
        cout << "Total Setelah Diskon: Rp " << totalSetelahDiskonMobil << ".00" << endl;
    }

    long long diskonTambahan = 0;
    if (jmlMobil > 2 && maxLamaSewa > 10)
        diskonTambahan = totalSetelahDiskonSemua * 10 / 100;

    long long totalAkhir = totalSetelahDiskonSemua - diskonTambahan;

    cout << "=============================================" << endl;
    cout << "Nama Peminjam       : " << namaDepan << " " << namaBelakang << endl;
    cout << "Langganan           : " << langganan << endl;
    cout << "Jumlah Mobil        : " << jmlMobil << endl;
    cout << "Total Sewa          : Rp " << totalSewaSemua << ".00" << endl;
    cout << "Diskon Tambahan 10% : Rp " << diskonTambahan << ".00" << endl;
    cout << "Total Akhir         : Rp " << totalAkhir << ".00" << endl;

    cout << "Bonus               : ";
    if (totalSewaSemua > 2500000)
        cout << "SARUNG COVER MOBIL" << endl;
    else
        cout << "TISSUE KABIN" << endl;

    cout << "=============================================" << endl;

    return 0;
}
