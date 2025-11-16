#include <iostream>
#include <limits>
using namespace std;

//---------Kasus 1------------
void helloWorld_5x(){
    for (int i=0;i<5;++i)cout<<"Hello World\n";
}
void helloWorld_N(){
    int  N;
    cout<<"Masukkan N:";
    if(!(cin>>N)||N<=0{cout<<"N harus >0\n";return;})
    for (int i=0;i<N;++i)cout<<"Hello World\n";
}

//---------Kasus 2------------
void kasus2(){
    //Baris 1: 0 1 2 3 4 5 6 7 8 9
    for (int i=0;i<10;++i){
        if(i>0)cout<<'';
        cout<<i;
    }
    cout<<'\n';

    //Baris 2:1 2 3 4 5 6 7 8 9 10
    for (int i=1;i<=10;++i){
        if(i>1)cout<<'';
        cout<<i;
    }
    cout<<'\n';
}

//---------Kasus 2a------------
void kasus2a(){
    int a,N;
    cout<<"input N"; if(!(cin>>N)return;
    cout<<"input a:"; if(!(cin>>a))return;
    if (a>N){cout<<"a harus <=N\n";return;}
    for (int i=a;i<=N;++i)cout<<i<<(i<N?'':'\n');
}

//---------Kasus 3------------
void kasus3(){
    for (int i=10;i>=0;--i)cout<<i<<(i?'':'\n');
    for (int i=9;i>=1;--i)cout<<i<<(i>1?'':'\n');
}

//---------Kasus 3a------------
void kasus3(){
    int a,b;
    cout<<"input a:";if(!(cin>>a))return;
    cout<<"input b:";if(!(cin>>b))return;
    if (b<a){cout<<"b harus >=a\n";return;}
    for (int i=b;i>=a;--i)cout<<i<<(i>a?'':'\n');
}

//---------Kasus 4------------
void kasus4(){
    int a,b,step;
    cout<<"input a:";if(!(cin>>a))return;
    cout<<"input b:";if(!(cin>>b))return;
    cout<<"input increment value:";if(!(cin>>step))||step<=0){cout<<"step harus >0\n";return;}

    if (a<=b){//naik
        for(int i=a;i<=b;i+=step)cout<<i<<(i+step<=b?'':'\n');
    }else{      //turun
        for(int i=a;i>=b;i-=step)cout<<i<<(i-step>=b?'':'\n');
    }
}

//---------MAIN MENU------------
int main(){
    while(true){
        cout<<"\n===MENU===\n"
        <<"1. Kasus 1: Hello World (5x/N)\n"
        <<"2. Kasus 2: Deret 0..9&1..10\n"
        <<"3. Kasus 2a: Deret a..N (naik)\n"
        <<"4. Kasus 3: Deret menurun (10..0&9..1)\n"
        <<"5. Kasus 3a: Deret b..a (turun)\n"
        <<"6. Kasus 4: Deret dengan increment user\n"
        <<"0. Keluar\n"
        <<"pilih:";

        int p;if(!(cin>>p))return 0;
        switch(p){
            case 1:kasus1_menu();break;
            case 2:kasus2();break;
            case 3:kasus2a();break;
            case 4:kasus3();break;
            case 5:kasus3a();break;
            case 6:kasus4();break;
            case 0:cout<<"Selesai.\n";return 0;
            default:cout<<"Pilihan tidak valid\n";
        }
    }
}
