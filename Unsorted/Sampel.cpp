#include <iostream> // Input Output
using namespace std; // ringkas std


// Tahap 1: Input data awal
// Mengambil jumlah mobil, nama pembeli, dan status langganan
int main() { // mulai program

    int jmlMobil; // jumlah mobil
    string namaDepan, namaBelakang; // nama pembeli
    char langganan; // status langganan

    cout << "PROGRAM PENYEWAAN/RENTAL MOBIL" << endl; // tampil judul
    cout << "=============================================" << endl; // garis
    cout << "Jumlah Mobil yang disewa       : ";
    cin >> jmlMobil; // input jumlah
    cout << "Nama Pembeli                   : ";
    cin >> namaDepan >> namaBelakang; // input nama
    cout << "Apakah Pembeli Langganan [Y/T] : ";
    cin >> langganan; // input status

    // Tahap 2: Inisialisasi variabel total
    // Menyimpan total sewa, total setelah diskon, dan lama sewa terbesar
    long long totalSewaSemua = 0;          // total sewa
    long long totalSetelahDiskonSemua = 0; // total diskon
    int maxLamaSewa = 0;                   // lama maks

    // Tahap 3: Perulangan setiap mobil
    // Mengolah data dan perhitungan setiap mobil yang disewa
    for (int i = 1; i <= jmlMobil; i++) {  // loop mobil
        string namaMobil, jenisMobil, satuan = "unit"; // data mobil
        int tahun, lamaSewa; // data numerik
        long long hargaPerHari; // harga harian
        long long totalHarga, diskonLangganan, totalSetelahDiskonMobil; // hitungan

        cout << "---------------------------------------------" << endl;
        cout << "Mobil ke-" << i << endl; // tampil urutan
        cout << "Nama Mobil          : ";
        cin >> namaMobil; // input nama mobil

        // Tahap 4: Penentuan data mobil
        // Menentukan data berdasarkan nama atau input manual
        if (namaMobil == "Avanza" || namaMobil == "avanza") {
            jenisMobil   = "MPV";  // jenis
            tahun        = 2015;   // tahun
            hargaPerHari = 250000; // harga

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
            cin >> jenisMobil;             // input jenis
            cout << "Tahun Produksi      : ";
            cin >> tahun;                  // input tahun
            cout << "Satuan              : ";
            cin >> satuan;                 // input satuan
            cout << "Harga Sewa/Hari     : Rp ";
            cin >> hargaPerHari;           // input harga
        }

        // Tahap 5: Input lama sewa
        // Mengambil lama sewa untuk dikalikan harga
        cout << "Lama Sewa (hari)    : ";
        cin >> lamaSewa;  // input lama

        if (lamaSewa > maxLamaSewa)
            maxLamaSewa = lamaSewa; // update lama maks

        // Tahap 6: Perhitungan biaya mobil
        // Menghitung total harga dan diskon
        totalHarga = hargaPerHari * lamaSewa; // hitung total
        totalSewaSemua += totalHarga; // akumulasi total

        if (langganan == 'Y' || langganan == 'y')
            diskonLangganan = totalHarga * 10 / 100; // diskon 10%
        else
            diskonLangganan = 0; // tanpa diskon

        totalSetelahDiskonMobil = totalHarga - diskonLangganan; // total diskon
        totalSetelahDiskonSemua += totalSetelahDiskonMobil; // akumulasi

        // Tahap 7: Output per mobil
        // Menampilkan hasil perhitungan setiap mobil
        cout << "Total Harga Sewa    : Rp " << totalHarga << ".00" << endl;
        cout << "Diskon 10%          : Rp " << diskonLangganan << ".00" << endl;
        cout << "Total Setelah Diskon: Rp " << totalSetelahDiskonMobil << ".00" << endl;
    }

    // Tahap 8: Diskon tambahan
    // Diskon ekstra jika syarat terpenuhi
    long long diskonTambahan = 0;
    if (jmlMobil > 2 && maxLamaSewa > 10)
        diskonTambahan = totalSetelahDiskonSemua * 10 / 100; // hitung tambahan

    // Tahap 9: Hitung total akhir
    // Mengurangi diskon tambahan dari total keseluruhan
    long long totalAkhir = totalSetelahDiskonSemua - diskonTambahan;

    // Tahap 10: Output ringkasan
    // Menampilkan keseluruhan hasil transaksi
    cout << "=============================================" << endl;
    cout << "Nama Peminjam       : " << namaDepan << " " << namaBelakang << endl;
    cout << "Langganan           : " << langganan << endl;
    cout << "Jumlah Mobil        : " << jmlMobil << endl;
    cout << "Total Sewa          : Rp " << totalSewaSemua << ".00" << endl;
    cout << "Diskon Tambahan 10% : Rp " << diskonTambahan << ".00" << endl;
    cout << "Total Akhir         : Rp " << totalAkhir << ".00" << endl;

    // Tahap 11: Output bonus
    // Memberikan hadiah berdasarkan total sewa
    cout << "Bonus               : ";
    if (totalSewaSemua > 2500000)
        cout << "SARUNG COVER MOBIL" << endl;
    else
        cout << "TISSUE KABIN" << endl;

    cout << "=============================================" << endl;

    return 0; // selesai
}
