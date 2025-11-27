#include <iostream>
using namespace std;

int main() {
    int pilih = 1;

    while (pilih != 0) {

        cout << "===========================" << endl;
        cout << "        MENU PROGRAM       " << endl;
        cout << "===========================" << endl;
        cout << "1. Kasus 2 - Array Terbalik" << endl;
        cout << "2. Kasus 3 - Max/Min" << endl;
        cout << "3. Kasus 4 - Genap/Ganjil" << endl;
        cout << "4. Kasus 4a - Pos/Neg" << endl;
        cout << "5. Kasus 5 - Array 0/1" << endl;
        cout << "0. Keluar" << endl;
        cout << "===========================" << endl;

        cout << "Pilih menu: ";
        cin >> pilih;
        cout << endl;

        switch (pilih) {

        case 1: {
            int n;

            cout << "Input n: ";
            cin >> n;

            int arr[n];

            for (int i = 0; i < n; i++) {
                cout << "Input ke-" << i+1 << ": ";
                cin >> arr[i];
            }

            cout << endl << "Hasil Array: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";

            cout << endl << "Reverse Array: ";
            for (int i = n - 1; i >= 0; i--)
                cout << arr[i] << " ";

            cout << endl << endl;
            break;
        }

        case 2: {
            int n;

            cout << "Input n: ";
            cin >> n;

            int arr[n];

            for (int i = 0; i < n; i++) {
                cout << "Input ke-" << i+1 << ": ";
                cin >> arr[i];
            }

            cout << endl << "Hasil Array: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";

            int besar = arr[0];
            int kecil = arr[0];
            int jumlah = 0;

            for (int i = 0; i < n; i++) {
                if (arr[i] > besar) besar = arr[i];
                if (arr[i] < kecil) kecil = arr[i];
                jumlah += arr[i];
            }

            float rata = (float)jumlah / n;

            cout << endl << "Nilai terbesar: " << besar;
            cout << endl << "Nilai terkecil: " << kecil;
            cout << endl << "Jumlah array: " << jumlah;
            cout << endl << "Rata-rata: " << rata;

            cout << endl << endl;
            break;
        }

        case 3: {
            int n;

            cout << "Input n: ";
            cin >> n;

            int arr[n];

            for (int i = 0; i < n; i++) {
                cout << "Input ke-" << i+1 << ": ";
                cin >> arr[i];
            }

            cout << endl << "Hasil Array Genap: ";
            for (int i = 0; i < n; i++)
                if (arr[i] % 2 == 0) cout << arr[i] << " ";

            cout << endl << "Hasil Array Ganjil: ";
            for (int i = 0; i < n; i++)
                if (arr[i] % 2 != 0) cout << arr[i] << " ";

            cout << endl << endl;
            break;
        }

        case 4: {
            int n;

            cout << "Input n: ";
            cin >> n;

            int arr[n];

            for (int i = 0; i < n; i++) {
                cout << "Input ke-" << i+1 << ": ";
                cin >> arr[i];
            }

            cout << endl << "Hasil Array Positif Genap: ";
            for (int i = 0; i < n; i++)
                if (arr[i] > 0 && arr[i] % 2 == 0) cout << arr[i] << " ";

            cout << endl << "Hasil Array Negatif Genap: ";
            for (int i = 0; i < n; i++)
                if (arr[i] < 0 && arr[i] % 2 == 0) cout << arr[i] << " ";

            cout << endl << "Hasil Array Positif Ganjil: ";
            for (int i = 0; i < n; i++)
                if (arr[i] > 0 && arr[i] % 2 != 0) cout << arr[i] << " ";

            cout << endl << "Hasil Array Negatif Ganjil: ";
            for (int i = 0; i < n; i++)
                if (arr[i] < 0 && arr[i] % 2 != 0) cout << arr[i] << " ";

            cout << endl << endl;
            break;
        }

        case 5: {
            int n;

            cout << "Input n: ";
            cin >> n;

            int arr[n];

            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) arr[i] = 0;
                else arr[i] = 1;
            }

            cout << "Hasil Array: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";

            cout << endl << endl;
            break;
        }

        case 0:
            cout << "Program selesai." << endl;
            break;

        default:
            cout << "Pilihan salah!" << endl << endl;
        }
    }

    return 0;
}
