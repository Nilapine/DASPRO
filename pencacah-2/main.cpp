/*
PROGRAM CETAK AKU CANTIK AKU DIAM
NOTASI 5 => Berdasarkan pencacah 2 (i traversal)
Nama : Nila Farihah
NIM : A11.2022.14667
Tanggal : 23 November 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int x, y, i; //i sebagai counter

    //ALGORITMA
    cout << "Input awalan dan akhiran : ";
    cin >> x >> y; //x sebagai awalan, y sebagai akhiran

    for (i=x; i<=y; i++){
        cout << "Aku cantik, aku diam" << endl; //nanti hasil jumlahnya selisih dikurang 1. misal akhiran 10, awalan 2, nanti cetakannya 9
    }
    cout << "selesai" << endl;
    return 0;
}
