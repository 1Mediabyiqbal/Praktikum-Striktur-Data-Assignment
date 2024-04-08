#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Fungsi untuk melakukan pencarian biner pada string
int binary_search(const string& sentence, char target) {
    int left = 0;
    int right = sentence.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (sentence[mid] == target) {
            return mid;
        }
        else if (sentence[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    string kalimat;
    char huruf;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    // Ubah kalimat menjadi huruf kecil untuk pencarian yang case-insensitive
    transform(kalimat.begin(), kalimat.end(), kalimat.begin(), ::tolower);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;
    huruf = tolower(huruf); // Ubah huruf menjadi huruf kecil untuk pencarian yang case-insensitive

    int hasil_pencarian = binary_search(kalimat, huruf);

    if (hasil_pencarian != -1) {
        cout << "Huruf ditemukan pada indeks ke-" << hasil_pencarian << "." << endl;
    } else {
        cout << "Huruf tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
