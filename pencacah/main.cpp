/*
PROGRAM CETAK MAHASISWA
NOTASI 5 => Berdasarkan pencacah (i traversal)
Nama : Nila Farihah
NIM : A11.2022.14667
Tanggal : 23 November 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int i, n; //n untuk jumlah pengulangan

    //ALGORITMA
    cout << "Berapa kali diulang : ";
    cin >> n;

    for (i=1; i<=n; i++){
        cout << "Mahasiswa Kece" << endl; //sebagai penanda untuk mengulang (counter) yaitu "i" ->inkremennya
    }
    cout << "selesai" << endl;

    /*
    for(; n>0; n--) {
        cout << "Mahasiswa Kece" << endl;
    }
    cout << "selesai" << endl
    */
    return 0;
}
