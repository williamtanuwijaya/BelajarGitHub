#include <iostream>
using namespace std;

int main() {
    int tahun;
    cin >> tahun;

    if (tahun % 4 == 0){
        cout << "Bisa dibagi 4, ";
        if (tahun % 100 == 0){
            cout << "bisa dibagi 100, ";
            if (tahun % 400 == 0){
                cout << " bisa dibagi 400, tahun kabistat";
            } else {
                cout << " tidak bisa dibagi 400, bukan tahun kabistat";}
        } else 
        { cout << "tidak bisa dibagi 100, maka tahun kabistat";}
    } else { 
        cout << "bukan tahun kabistat";}

    return 0;
}