#include <iostream>
#include <string>
using namespace std;

int main() {
    const int N = 5;

    string dataStr[N][2];
    int dataInt[N][3];

    for (int i = 0; i < N; i++) {
        cout << "Data ke-" << i + 1 << endl;

        cout << "Nama Obat : ";
        cin >> dataStr[i][0];

        cout << "Satuan    : ";
        cin >> dataStr[i][1];

        cout << "Jumlah    : ";
        cin >> dataInt[i][0];

        cout << "Harga     : ";
        cin >> dataInt[i][1];

        dataInt[i][2] = dataInt[i][0] * dataInt[i][1];
        cout << endl;
    }

    int colNo     = 4;
    int colNama   = 12;
    int colSatuan = 10;
    int colJumlah = 8;
    int colHarga  = 8;

    cout << "Laporan data Obat" << endl;
    cout << "------------------------------------------------------------" << endl;

    cout << "No"
         << string(colNo - 2, ' ')
         << "Nama Obat"
         << string(colNama - 9, ' ')
         << "Satuan"
         << string(colSatuan - 6, ' ')
         << "Jumlah"
         << string(colJumlah - 6, ' ')
         << "Harga"
         << string(colHarga - 5, ' ')
         << "Total"
         << endl;

    cout << "------------------------------------------------------------" << endl;

    int totalJumlah = 0;
    int totalHarga  = 0;
    int totalSemua  = 0;

    for (int i = 0; i < N; i++) {
        string sNo     = to_string(i + 1);
        string sJumlah = to_string(dataInt[i][0]);
        string sHarga  = to_string(dataInt[i][1]);

        int padNo     = colNo     - sNo.length();
        int padNama   = colNama   - dataStr[i][0].length();
        int padSatuan = colSatuan - dataStr[i][1].length();
        int padJumlah = colJumlah - sJumlah.length();
        int padHarga  = colHarga  - sHarga.length();

        if (padNo < 1) padNo = 1;
        if (padNama < 1) padNama = 1;
        if (padSatuan < 1) padSatuan = 1;
        if (padJumlah < 1) padJumlah = 1;
        if (padHarga < 1) padHarga = 1;

        cout << sNo
             << string(padNo, ' ')
             << dataStr[i][0]
             << string(padNama, ' ')
             << dataStr[i][1]
             << string(padSatuan, ' ')
             << sJumlah
             << string(padJumlah, ' ')
             << sHarga
             << string(padHarga, ' ')
             << dataInt[i][2]
             << endl;

        totalJumlah += dataInt[i][0];
        totalHarga  += dataInt[i][1];
        totalSemua  += dataInt[i][2];
    }

    cout << "------------------------------------------------------------" << endl;

    string sTotJml = to_string(totalJumlah);
    string sTotHrg = to_string(totalHarga);

    int prefixWidth = colNo + colNama + colSatuan;
    int labelLen = 7;
    int padLabel = prefixWidth - labelLen;
    if (padLabel < 1) padLabel = 1;

    int padTotJml = colJumlah - sTotJml.length();
    int padTotHrg = colHarga  - sTotHrg.length();
    if (padTotJml < 1) padTotJml = 1;
    if (padTotHrg < 1) padTotHrg = 1;

    cout << "Total :"
         << string(padLabel, ' ')
         << sTotJml
         << string(padTotJml, ' ')
         << sTotHrg
         << string(padTotHrg, ' ')
         << totalSemua << endl;

    cout << "------------------------------------------------------------" << endl;

    return 0;
}
