#include <iostream>
#include <vector>

void displayNumbers(const std::vector<int>& data) {
    std::cout << "Data: {";
    for (size_t i = 0; i < data.size(); ++i) {
        std::cout << data[i];
        if (i != data.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
}

int countNumber(const std::vector<int>& data, int target) {
    int count = 0;
    for (int num : data) {
        if (num == target) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;

    displayNumbers(data); // Menampilkan angka sebelum menghitung jumlah

    int jumlahAngka = countNumber(data, target);

    std::cout << "Jumlah angka " << target << " dalam data: " << jumlahAngka << std::endl;

    return 0;
}