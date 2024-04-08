//squential searching
#include <iostream>
#include <string>
#include <cctype>

// Fungsi untuk melakukan sequential search dan menghitung banyaknya huruf vokal dalam sebuah kalimat
int countVowels(const std::string& kalimat) {
    int count = 0;
    char vokal[] = {'a', 'e', 'i', 'o', 'u'};
    
    for (char ch : kalimat) {
        char lowercaseCh = std::tolower(ch);
        for (char huruf : vokal) {
            if (lowercaseCh == huruf) {
                count++;
                break;  // Keluar dari loop saat huruf vokal ditemukan
            }
        }
    }
    
    return count;
}

int main() {
    std::string kalimat;

    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, kalimat);

    int jumlahVokal = countVowels(kalimat);

    std::cout << "Jumlah huruf vokal dalam kalimat: " << jumlahVokal << std::endl;

    return 0;
}