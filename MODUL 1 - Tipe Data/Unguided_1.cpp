#include <iostream>

// Fungsi untuk menambahkan dua bilangan bulat
int tambah(int a, int b) {
    return a + b;
}

// Fungsi untuk mengalikan dua bilangan desimal
float kali(float a, float b) {
    return a * b;
}

int main() {
    // Deklarasi variabel
    int angka1 = 5, angka2 = 3;
    float desimal1 = 2.5, desimal2 = 1.5;

    // Panggil fungsi tambah dan cetak hasilnya
    std::cout << "Hasil penambahan: " << tambah(angka1, angka2) << std::endl;

    // Panggil fungsi kali dan cetak hasilnya
    std::cout << "Hasil perkalian: " << kali(desimal1, desimal2) << std::endl;

    return 0;
}
