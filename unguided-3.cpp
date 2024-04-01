#include <iostream>
#include <limits> // Untuk menghapus input buffer

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int data[n];

    cout << "Masukkan data: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    int pilihan;
    do {
        cout << "\nPilih operasi: " << endl;
        cout << "1. Cari nilai maksimum" << endl;
        cout << "2. Cari nilai minimum" << endl;
        cout << "3. Cari rata-rata" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int max = data[0];
                for (int i = 1; i < n; i++) {
                    if (data[i] > max) {
                        max = data[i];
                    }
                }
                cout << "Nilai maksimum: " << max << endl;
                break;
            }
            case 2: {
                int min = data[0];
                for (int i = 1; i < n; i++) {
                    if (data[i] < min) {
                        min = data[i];
                    }
                }
                cout << "Nilai minimum: " << min << endl;
                break;
            }
            case 3: {
                int jumlah = 0;
                for (int i = 0; i < n; i++) {
                    jumlah += data[i];
                }
                double avg = static_cast<double>(jumlah) / n;
                cout << "Rata-rata: " << avg << endl;
                break;
            }
            case 4:
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }

        // Membersihkan input buffer
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (pilihan != 4);

    return 0;
}
