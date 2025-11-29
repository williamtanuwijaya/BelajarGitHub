#include <iostream>
using namespace std;

int main()
{
    // int nilai = 60;

    // if(nilai >= 70)
    // {
    //     cout << "Anda lulus" << endl;
    // }
    // else {
    //     cout << "Anda gagal" << endl;
    // }
    // cout << "bagian ini akan selalu di eksekusi karena di luar if";

    // return 0;

    // int bilangan; //deklarasi
    // bilangan = 8;  //inisialisasi

    // if (bilangan > 0) {
    //     cout << bilangan << " adalah bilangan positif";
    // }
    // else if (bilangan < 0) {
    //     cout << bilangan << " adalah bilangan negatif";
    // }
    // else {
    //     cout << bilangan << " adalah bilangan nol";
    // }

    int angka = 0;

    // string result = (angka > 0) ? "bilangan positif" : "bilangan negatif";
    // string result = (angka > 0) ? "bilangan positif" : (angka <0) ? "bilangan negatif" : "bilangan nol";
    // cout << angka << " " << result;

    int bilangan; // deklarasi
    bilangan = 0; // inisialisasi

    if (bilangan > 0) //cek apakah bilangan positif
    {
        if (bilangan % 2 == 0){ //apakah bilangan genap
            cout << bilangan << " adalah bilangan genap positif";
        }
        else {
            cout << bilangan << " adalah bilangan ganjil positif";
        }
    }
    else if (bilangan < 0) {
        if (bilangan % 2 == 0){
            cout << bilangan << " adalah bilangan genap  negatif";
        } else {
            cout << bilangan << " adalah bilangan ganjil negatif";
        }
    }
    else {
        cout << bilangan << " adalah bilangan nol";
    }
    return 0;
}