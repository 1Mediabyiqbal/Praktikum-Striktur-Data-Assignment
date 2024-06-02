#include <iostream>
using namespace std;


int faktorial(int n) {
    // jika n adalah 0 atau 1, maka faktorialnya adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int bilangan;
    // Masukkan bilangan 
    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    // Memeriksa apakah bilangan positif
    if (bilangan < 0) {
        cout << "Masukan bilangan bulat positif!!!" << endl;
    } else {
        // Menghitung faktorial
        cout << "Faktorial dari " << bilangan << " adalah: " << faktorial(bilangan) << endl;
    }

    return 0;
}