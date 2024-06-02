#include <iostream>
using namespace std;

// Fungsi untuk menghitung faktorial
int a(int n) {
    // Jika n adalah 0 atau 1, maka faktorialnya adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        int hasil =a(n - 1);
        return n * hasil;
    }
}

// Fungsi untuk menghitung faktorial secara tidak langsung
int b(int n) {
    // Jika n adalah 0 atau 1, maka faktorialnya adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        int hasil = b(n - 1);
        return n * hasil;
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
        // Menghitung faktorial secara tidak langsung
        cout << "Faktorial dari " << bilangan << " adalah: " << b(bilangan) << endl;
    }

    return 0;
}