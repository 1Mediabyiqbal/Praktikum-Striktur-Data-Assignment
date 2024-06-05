#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Struktur data untuk setiap mahasiswa
struct Mahasiswa {
    string nim;
    int nilai;

    // Konstruktor
    Mahasiswa(string nim, int nilai) : nim(nim), nilai(nilai) {}
};

// Node untuk chaining dalam hash table
struct HashNode {
    Mahasiswa data;
    HashNode* next;

    // Konstruktor
    HashNode(Mahasiswa data) : data(data), next(nullptr) {}
};

// Kelas hash table
class HashTable {
private:
    static const int TABLE_SIZE = 10;
    vector<HashNode*> table[TABLE_SIZE];

    // Fungsi hash sederhana
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

public:
    // Fungsi untuk menambahkan data mahasiswa
    void insert(string nim, int nilai) {
        Mahasiswa mahasiswa(nim, nilai);
        int hash_val = hashFunc(nim);

        for (auto node : table[hash_val]) {
            if (node->data.nim == nim) {
                node->data.nilai = nilai;
                cout << "Data berhasil diperbarui.\n";
                return;
            }
        }
        table[hash_val].push_back(new HashNode(mahasiswa));
        cout << "Data berhasil ditambahkan.\n";
    }

    // Fungsi untuk menghapus data mahasiswa berdasarkan NIM
    void remove(string nim) {
        int hash_val = hashFunc(nim);

        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->data.nim == nim) {
                table[hash_val].erase(it);
                cout << "Data berhasil dihapus.\n";
                return;
            }
        }
        cout << "Data tidak ditemukan.\n";
    }

    // Fungsi untuk mencari data mahasiswa berdasarkan NIM
    Mahasiswa* searchByNIM(string nim) {
        int hash_val = hashFunc(nim);
        for (auto node : table[hash_val]) {
            if (node->data.nim == nim) {
                return &(node->data);
            }
        }
        return nullptr;
    }

    // Fungsi untuk mencari data mahasiswa berdasarkan rentang nilai
    vector<Mahasiswa> searchByNilai(int minNilai, int maxNilai) {
        vector<Mahasiswa> result;
        for (int i = 0; i < TABLE_SIZE; i++) {
            for (auto node : table[i]) {
                if (node->data.nilai >= minNilai && node->data.nilai <= maxNilai) {
                    result.push_back(node->data);
                }
            }
        }
        return result;
    }
};

int main() {
    HashTable mahasiswaTable;
    int choice;
    string nim;
    int nilai;

    do {
        cout << "Menu:\n";
        cout << "1. Tambah Data Mahasiswa\n";
        cout << "2. Hapus Data Mahasiswa\n";
        cout << "3. Cari Data Mahasiswa berdasarkan NIM\n";
        cout << "4. Cari Data Mahasiswa berdasarkan Rentang Nilai (80-90)\n";
        cout << "5. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan NIM Mahasiswa: ";
                cin >> nim;
                cout << "Masukkan Nilai Mahasiswa: ";
                cin >> nilai;
                mahasiswaTable.insert(nim, nilai);
                break;
            case 2:
                cout << "Masukkan NIM Mahasiswa yang akan dihapus: ";
                cin >> nim;
                mahasiswaTable.remove(nim);
                break;
            case 3:
                cout << "Masukkan NIM Mahasiswa yang ingin dicari: ";
                cin >> nim;
                {
                    Mahasiswa* mahasiswa = mahasiswaTable.searchByNIM(nim);
                    if (mahasiswa != nullptr) {
                        cout << "Data Mahasiswa:\n";
                        cout << "NIM: " << mahasiswa->nim << endl;
                        cout << "Nilai: " << mahasiswa->nilai << endl;
                    } else {
                        cout << "Data Mahasiswa tidak ditemukan.\n";
                    }
                }
                break;
            case 4:
                {
                    vector<Mahasiswa> result = mahasiswaTable.searchByNilai(80, 90);
                    if (!result.empty()) {
                        cout << "Data Mahasiswa dengan Nilai 80-90:\n";
                        for (const Mahasiswa& mahasiswa : result) {
                            cout << "NIM: " << mahasiswa.nim << ", Nilai: " << mahasiswa.nilai << endl;
                        }
                    } else {
                        cout << "Tidak ada Mahasiswa dengan Nilai 80-90.\n";
                    }
                }
                break;
            case 5:
                cout << "Terima kasih cuy!!!\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (choice != 5);

    return 0;
}