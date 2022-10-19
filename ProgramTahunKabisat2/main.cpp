#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int tahun_masehi;
    char pilihan;

    //ALGORITMA
    do {
    cout << "Masukkan Tahun Masehi : ";
    cin >> tahun_masehi;
    if (tahun_masehi > 0){
        if (tahun_masehi % 4 == 0){
            if (tahun_masehi % 100 == 0){
                if (tahun_masehi % 400 == 0){
                    cout << tahun_masehi << " merupakan tahun kabisat";
                }
                else {
                    cout << tahun_masehi << " bukan tahun kabisat";
                }
            }
            else {
                cout << tahun_masehi << " merupakan tahun kabisat";
            }
        }
        else {
            cout << tahun_masehi << " bukan tahun kabisat";
        }
    }
    else if (tahun_masehi == 0){
        cout << tahun_masehi << " bukan tahun kabisat" << endl;
    }
    else {
    cout <<  "Inputan Salah!" << endl;}
    cout << endl << "Apakah Anda Akan Menghitung Lagi? (Y/T)" << endl;
    cin >> pilihan;
    }
    while (pilihan/='Y');
    return 0;

}
