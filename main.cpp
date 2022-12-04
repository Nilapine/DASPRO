/*
PROGRAM CETAK MAHASISWA
NOTASI 4 => Berdasarkan dua aksi
Nama : Nila Farihah
NIM : A11.2022.14667
Tanggal : 23 November 2022
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int i=0, n;

    //ALGORITMA
    cout << "Input berapa kali diulang : ";
    cin >> n;

    while (true) { //for(;;)
        i++;
        cout << "Mahasiswa Kece" << endl;
        if (i>=n){
            cout << "stop" << endl;
            break; //jika tidak di-break nantinya akan kecetak terus tanpa henti
        }
    }
    return 0;
}
