#include <iostream>

// Contoh Class
class Mobil {
public:
    // Atribut
    std::string merek;
    int tahunProduksi;
    
    // Metode
    void info() {
        std::cout << "Mobil " << merek << ", diproduksi tahun " << tahunProduksi << std::endl;
    }
};

// Contoh Struct
struct Buku {
    // Atribut
    std::string judul;
    std::string penulis;
    int tahunTerbit;
};

int main() {
    // Menggunakan Class
    Mobil mobil1;
    mobil1.merek = "Toyota";
    mobil1.tahunProduksi = 2020;
    mobil1.info(); // Memanggil metode info()

    // Menggunakan Struct
    Buku buku1;
    buku1.judul = "Harry Potter";
    buku1.penulis = "J.K. Rowling";
    buku1.tahunTerbit = 1997;

    std::cout << "Buku " << buku1.judul << " ditulis oleh " << buku1.penulis << " dan diterbitkan tahun " << buku1.tahunTerbit << std::endl;

    return 0;
}
