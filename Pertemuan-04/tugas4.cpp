#include <iostream>
using namespace std;

int main() {
    int x0,y0;
    cout<<"Masukkan nilai awal x: ";
    cin>>x0;
    cout<<"Masukkan nilai awal y: ";
    cin>>y0;

    int x,y,t;

    // Post-increment / decrement: nilai pakai dulu, baru variabel berubah

    x = x0; t = x++;
    cout<<"1)x++: nilai pakai= "<<t<<", x setelahnya= "<<x<<endl;

    y = y0,t = y++;
    cout<<"2)y++: nilai pakai= "<<t<<", y setelahnya= "<<y<<endl;

    x = x0; t = x--;
    cout<<"3)x--: nilai pakai= "<<t<<", x setelahnya= "<<x<<endl;

    x = x0; t = y--;
    cout<<"4)y--: nilai pakai= "<<t<<", y setelahnya= "<<y<<endl;

    // Pre-increment / decrement: variabel berubah dulu, baru nilainya dipakai

    x = x0; t = ++x;
    cout<<"5)++x: nilai pakai= "<<t<<", x sekarang= "<<x<<endl;

    y = y0; t = ++y;
    cout<<"6)++y: nilai pakai= "<<t<<", y sekarang= "<<y<<endl;

    x = x0; t = --x;
    cout<<"7)--x: nilai pakai= "<<t<<", x sekarang= "<<x<<endl;

    y = y0; t = --y;
    cout<<"8)--y: nilai pakai= "<<t<<", y sekarang= "<<y<<endl;

    return 0;
}
