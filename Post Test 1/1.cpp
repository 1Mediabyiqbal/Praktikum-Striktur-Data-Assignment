#include <iostream>
#include <vector>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5, 5};
    int target = 5; 
    bool found = false;
    for (size_t i = 0; i < data.size(); ++i) {
        if (data[i] == target) {
            std::cout << "Angka " << target << " ditemukan pada indeks: " << i << std::endl;
            found = true;
        }
    }

    if (!found) {
        std::cout << "Angka " << target << " tidak ditemukan dalam array." << std::endl;
    }

    return 0;
}
