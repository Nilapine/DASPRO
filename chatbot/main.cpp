/*
PROGRAM CHATBOT BUCIN
NOTASI => PENGULANGAN  KONDISI PENGULANGAN
Nama : Nila Farihah
NIM : A11.2022.14667
Tanggal : 23 November 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    char pilih;

    //ALGORITMA
    cout << "Apa kamu sayang aku? [y/t] : ";
    cin >> pilih;
    while (pilih != 'y'){
        cout << "Apa kamu sayang aku? [y/t] : ";
        cin >> pilih;
    }
    cout << "selesai" << endl;





    return 0;
}
