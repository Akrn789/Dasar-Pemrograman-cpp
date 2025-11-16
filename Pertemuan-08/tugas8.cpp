#include <iostream>
#include <string>
using namespace std;

int main() {
    string tipe;
    int jam;
    int biaya = 0;

    cout << "=== Program Menghitung Biaya Parkir ===" << endl;
    cout << "Masukkan tipe kendaraan : ";
    cin >> tipe;
    cout << "Masukkan lama parkir    : ";
    cin >> jam;

    // Mengecek jenis kendaraan dan menghitung biaya

    if (tipe == "tossa" || tipe == "sepeda motor" || tipe == "sepeda listrik" || tipe == "sepeda") {
            if (jam > 12)
                biaya = 50000;
            else
                biaya = jam * 3000;
    }
    else if (tipe == "mobil") {
            if (jam > 12)
                biaya = 75000;
            else
                biaya = jam * 5000;
    }
    else if (tipe == "truck" || tipe == "minitruck" || tipe == "bus" || tipe == "minibus") {
            if (jam > 8)
                biaya = 250000;
            else biaya = jam * 25000;
    }
    else {
            cout << "Tipe kendaraan tidak dikenali!" << endl;
            return 0;
    }

    // Menampilkan hasil perhitungan parkir
    cout << "--------------------------------------------" << endl;
    cout << "Jenis Kendaraan : " << tipe << endl;
    cout << "Lama Parkir     : " << jam << " Jam" << endl;
    cout << "Total Biaya     : Rp " << biaya << endl;

    return 0;
}
