#include <iostream>
#include <math.h>

using namespace std;

int main() {
    cout << "=== (1) y = a^3 + 7 ===\n";
    double a;
    cout << "Masukkan a: ";
    cin >> a;
    double y1 = pow(a, 3) + 7;
    cout << "Hasil y = " << y1 << "\n\n";


    cout << "=== (2) y = a*x^2 + b*x + c ===\n";
    double A, B, C, x;
    cout << "Masukkan a b c x (pisah spasi): ";
    cin >> A >> B >> C >> x;
    double y2 = A * pow(x,2) + B * x + C;
    cout << "Hasil y = " << y2 << "\n\n";

    cout << "=== Jumlah & rata-rata 5 bilangan ===\n";
    double total = 0.0, v;
    for (int i = 1; i <= 5; ++i){
        cout << "Bilangan ke-" << i <<":";
        cin >> v;
        total += v;
    }
    cout << "Jumlah = " << total << "\n";
    cout << "Rata-rata = " << (total / 5.0) << "\n\n";

    cout << "=== Konversikan suhu dari Celsius ===\n";
    double Cel;
    cout << "Masukkan suhu (Celsius)";
    cin >> Cel;

    double F = (9.0/5.0) * Cel + 32.0;
    double K = Cel + 273;
    double R = (4.0/5.0) * Cel;

    cout << "Fahrenheit = " << F << "\n";
    cout << "Kelvin     = " << K << "\n";
    cout << "Reamur     = " << R << "\n";

    return 0;
}
