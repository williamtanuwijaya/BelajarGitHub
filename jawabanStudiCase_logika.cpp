#include <iostream>
using namespace std;

int main () {
    int tahun;
    cout << " Masukkan Tahun";
    cin >> tahun;
    //2000
    if (( tahun % 400 == 0) || (tahun % 4 == 0) && (tahun % 100 !=0)) {
        cout << tahun << " adalah tahun kabisat" << endl;
    } else {
        cout << tahun << " bukan tahun kabisat" << endl;
    }
}