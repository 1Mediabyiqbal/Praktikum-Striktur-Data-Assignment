#include <iostream>
using namespace std;
int main()
{
    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 65;
    nilai[1] = 55;
    nilai[2] = 45;
    nilai[3] = 35;
    nilai[4] = 25;

    //mencetak array
    cout << "Isi array pertama :" << nilai[0]  << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}