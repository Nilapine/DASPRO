/*
PROGRAM CETAK BILANGAN POSITIF RANGE
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
    int i, n;

    //ALGORITMA
    cout << "Range batas bilangan genap : "; //masukkan jumlah pengulangan
    cin >> n; //input lalu simpan di n (n digunakan untuk batas akhirnya)


    /*
    for(i=0; i<=n; i++){        //bilangan genap nolnya ikut
        if(i%2 ==0){
                                //for otomatis nambah 1
        cout << i << endl;
        }
    }




    for (i=0; i<=n; i+=2){
        if (i==0){
            continue;
            cout << i << endl;
        }
    }

    */

    for (i=0; i<=n; i++){ //bilangan genap nolnya ga ikut
        if (i%2==0){
            if(i==0)
                continue;
            cout << i << endl;
        }
    }

    cout << "selesai" << endl;

    //RUMUS RATA RATA
    /*int i, n, data[50];
    float rata,jum;

    cout<<"Banyaknya Data = ";
    cin>>n;
    cout<<endl;

    for (i=0; i<n; i++)
        {
           cout<<"Data ke-"<<i+1<<" = ";
           cin>>data[i];
           jum += data[i];
        }

    rata=jum/n;

    cout<<endl;
    cout<<"Nilai Total = "<<jum<<endl;
    cout<<"Nilai Rata-rata = "<<rata<<endl;
    */

    return 0;
}
