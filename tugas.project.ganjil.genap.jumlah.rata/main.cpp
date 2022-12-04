#include<iostream>
#include<math.h>
using namespace std;
int main()

{
    cout << "===================== PROGRAM JUMLAH & RATA-RATA BILANGAN GANJIL GENAP ========================" << endl;
    cout << "{program untuk mencetak jumlah bilangan ganjil & genap serta rata-rata bilangan ganjil & genap}" << endl;
    cout << "" << endl;
    cout << "Nama    : Nila Farihah" << endl;
    cout << "NIM     : A11.2022.14667" << endl;
    cout << "Tanggal : 29 November 2022" << endl;
    cout << "" << endl;
    cout << "" << endl;

    //KAMUS
    int x,y, i;
    int banyakganjil = 0, banyakgenap = 0;
    float sumgenap = 0, sumganjil = 0;


    //ALGORITMA=
    cout << "======================================= MASUKKAN INPUTAN ======================================="<< endl;
    cout << "Input Awalan (x) :  ";
    cin >> x;
    cout << "Input Akhiran (y) :  ";
    cin >> y;
    cout << "" << endl;

    cout << "==================================== DAFTAR BILANGAN GENAP =====================================" << endl;
    for (i = x; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
            sumgenap += i;
            banyakgenap++;
        }
    }

    cout << "" << endl;
    cout << "================================================================================================" << endl;
cout << "Jumlah deret bilangan genap: " << sumgenap << endl;
    cout << "" << endl;
    cout << "Rata-rata deret genap: " << sumgenap/banyakgenap << endl;
    cout << "" << endl;
    cout << "==================================== DAFTAR BILANGAN GANJIL ====================================" << endl;
    for (i = x; i <= y; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
            sumganjil += i;
            banyakganjil++;
        }
    }
    cout << "" << endl;
    cout << "================================================================================================" << endl;
    cout << "Jumlah deret bilangan ganjil: " << sumganjil << endl;
    cout << "Rata-rata deret ganjil: " << sumganjil/banyakganjil << endl;
    return 0;
}
