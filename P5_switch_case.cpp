#include <iostream>
using namespace std;

int main () {
    int pilihan;
    string pesanan;
    cout << "Pilihan Menu" << endl;
    cout << "1. Nasi Goreng" << endl;
    cout << "2. Mie Goreng" << endl;
    cout << "3. Sate" << endl;
    cout << "Pilih Menu yang akan anda pesan" << endl;
    cin >> pilihan;

    switch(pilihan) {
        case 1 : 
            pesanan = "Nasi Goreng";
        break;
        case 2 : 
            pesanan = "Mie Goreng";
        break;
        case 3 : 
            pesanan = "Sate Goreng";
        break;
        default : 
            cout << "Pilih hanya dalam rentang tersebut!";
    }

    if (pesanan != "" ) {
        cout << "Menu yang di pesan : " << pesanan;
    }

    return 0;
}