#include <iostream>
using namespace std;

int main() {
    int x0,y0;
    cout<<"Masukkan nilai awal x: ";
    cin>>x0;
    cout<<"Masukkan nilai awal y: ";
    cin>>y0;

    int x,y;

    x = x0 ; y = y0 ; x += 1;
    cout<<"1) x += 1      -> x="<<x<<",  y="<<y<<endl;

    x = x0 ; y = y0 ; x += y;
    cout<<"2) x += y      -> x="<<x<<",  y="<<y<<endl;

    x = x0 ; y = y0 ; y -= 1;
    cout<<"3) y -= 1      -> x="<<x<<",  y="<<y<<endl;

    x = x0 ; y = y0 ; y -= x;
    cout<<"4) y -= x      -> x="<<x<<",  y="<<y<<endl;

    x = x0 ; y = y0 ; x *=(y + 1);
    cout<<"5) x *=(y + 1) -> x="<<x<<", y="<<y<<endl;

    x = x0 ; y = y0 ; y /= 3;
    cout<<"6) y /= 3      -> x="<<x<<",  y="<<y<<endl;

    return 0;
}
