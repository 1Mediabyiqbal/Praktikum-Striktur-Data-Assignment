#include <iostream>
#include <map>

int main() {
    // Membuat objek map
    std::map<std::string, int> nilai;

    // Menambahkan elemen ke map
    nilai["Nopal"] = 90;
    nilai["Deo"] = 85;
    nilai["Iqbal"] = 88;

    // Mengakses nilai dengan kunci
    std::cout << "Nilai Nopal: " << nilai["Nopal"] << std::endl;

    // Menggunakan iterator untuk mengakses semua elemen dalam map
    std::cout << "Daftar Nilai:" << std::endl;
    for (auto it = nilai.begin(); it != nilai.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    return 0;
}
