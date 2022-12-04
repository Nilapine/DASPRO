/*
PROGRAM JUMLAH DERET BILANGAN
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
    int i, n, bil, sum=0;

    //ALGORITMA
    cout << "Input berapa kali bilangan : ";
    cin >> n;

    for (i=1; i<=n; i++){
        cout << "Input bilangan ke-" << i << " : ";
        cin >> bil;
        sum += bil; //sum = sum + bil;
    }
    cout << "Jumlah deret bilangan : " << sum << endl;
    cout << "rata-rata deret bilangan : " << sum/n << endl; //rumus rata-rata = sum/n
    return 0;
}

//dimodifikasi jumlah bilangan deret genap antara 1-100 berapa, dicari jumlahnya dan rata-ratanya
//tugas praktikum 9. inputan x dan y genap dan ganjil
