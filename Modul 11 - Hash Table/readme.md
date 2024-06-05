<h1 align="center">Laporan Praktikum Modul Hash Table</h1>
<p align="center">Muhammad Iqbal (NIM 2311110013)</p>

## Dasar Teori
<p align="justify"> Hash table adalah struktur data yang mengorganisir data secara asosiatif dalam format array, dimana setiap nilai data memiliki indeks uniknya sendiri. Dengan pendekatan ini, akses ke data menjadi sangat cepat ketika indeks dari data yang diinginkan diketahui. Hash table memfasilitasi pencarian data secara efisien dengan menggunakan fungsi hash untuk memetakan kunci ke lokasi spesifik di dalam tabel. Ini memungkinkan akses cepat ke data yang terkait dengan kunci tersebut. Hash table pada dasarnya adalah kumpulan pasangan kunci-nilai, dimana setiap kunci unik dipetakan ke nilai tertentu. Untuk mengimplementasikan hal ini, hash table menggunakan fungsi hash untuk menghitung indeks di dalam array atau list, yang kemudian digunakan untuk menyimpan pasangan kunci-nilai. Dengan pendekatan ini, operasi penyisipan dan pencarian data berlangsung dengan cepat tanpa dipengaruhi oleh ukuran data. Hash table menggunakan array sebagai media penyimpanan, dengan teknik hashing untuk menentukan indeks tempat suatu elemen akan ditempatkan atau diambil.

### Fungsi Hash Table
<p align="justfy">Fungsi hash merupakan sebuah algoritma yang mengubah data input dengan panjang yang bervariasi menjadi data output dengan panjang yang tetap. Dalam konteks hash table, input data biasanya berupa kunci yang digunakan untuk membedakan setiap pasangan kunci-nilai secara unik. Output dari fungsi hash ini berupa hash code, yang berupa bilangan bulat yang menentukan posisi atau indeks dalam array yang mendasari struktur hash table.

- Pemrosesan Kunci (Key Processing)

    <p align="justify"> Kunci dapat bervariasi dalam jenis data, seperti string, integer, atau objek lainnya. Fungsi hash harus memiliki kemampuan untuk menangani berbagai jenis kunci ini dan mengubahnya menjadi nilai yang dapat diolah untuk menghasilkan hash code. Prinsip utamanya adalah mengambil kunci input dan mengubahnya menjadi format yang dapat diproses oleh fungsi hash.

- Pemetaan ke Hash Code (Mapping to Hash Code)

    <p align="justify">Fungsi hash melakukan pemrosesan terhadap kunci untuk menghasilkan hash code, yang merupakan nilai integer yang menentukan posisi penyimpanan dalam hash table. Proses ini sering melibatkan operasi matematika seperti modulo, yang bertujuan untuk memastikan hash code berada dalam rentang indeks array yang valid. Tujuannya adalah untuk menghasilkan hash code dari kunci input.

- Mengurangi Tabrakan (Collision Reduction)

    <p align= "justify"> Walaupun tidak mungkin untuk sepenuhnya menghindari tabrakan, sebuah fungsi hash yang baik akan berusaha meminimalkan frekuensi tabrakan. Strategi yang digunakan untuk mengurangi tabrakan ini melibatkan perancangan fungsi hash yang dapat menghasilkan distribusi hash code yang lebih merata dan acak. Tujuannya adalah untuk mengurangi kemungkinan terjadinya insiden dimana dua kunci atau lebih menghasilkan hash code yang sama.

### Teknik Teknik  dalam Hash Table

- Hashing 

    <p align="justify">Hashing adalah sebuah proses di mana kunci atau string karakter diubah menjadi nilai lain, biasanya berupa angka yang disebut hash code. Proses ini menggunakan fungsi hash yang melakukan pemetaan kunci ke ukuran tabel tertentu, dan kemudian menggunakan hash code sebagai indeks untuk menyimpan elemen dalam hash table. Hash table sendiri menyimpan pasangan kunci-nilai dalam bentuk array atau list yang dapat diakses melalui indeks yang ditentukan oleh hash code. Kunci dapat berupa string, angka, atau objek lainnya yang diberikan sebagai input ke fungsi hash. Karena jumlah kunci yang mungkin tak terbatas, fungsi hash bertugas memetakan kunci-kunci tersebut ke dalam ruang indeks tabel yang terbatas.

- Linear probling

    <p align="justify">Linear probing adalah suatu teknik yang digunakan dalam penanganan tabrakan dalam hash table. Tabrakan terjadi ketika dua kunci yang berbeda menghasilkan hash code yang sama, dan keduanya diarahkan ke indeks yang sama dalam hash table. Dalam linear probing, saat terjadi tabrakan, algoritma akan mencari slot kosong terdekat dalam tabel secara linear atau sekuensial. Jika slot pada indeks yang dihasilkan oleh fungsi hash sudah terisi, algoritma akan memeriksa slot berikutnya secara berurutan hingga menemukan slot kosong.


<p align="justify">Hashing dan teknik linear probing adalah bagian inti dalam pembuatan hash table. Hashing memungkinkan kunci dipetakan ke indeks tabel dengan kecepatan tinggi, sementara linear probing memberikan cara yang efektif untuk menangani tabrakan. Meskipun linear probing memiliki kekurangan seperti pembentukan gugus (clustering), teknik ini tetap populer karena sifatnya yang sederhana dan efisien dalam berbagai situasi penggunaan.

### Operasi pada Hash Table

<p align="justify"> Operasi-operasi dasar pada hash table mencakup penyisipan (insertion), pencarian (searching), dan penghapusan (deletion).

- Penyisipan (Insertion)

    <p align="justify"> Untuk menyisipkan elemen baru, proses dimulai dengan menggunakan fungsi hash untuk menentukan indeks kunci elemen tersebut dalam tabel. Jika indeks tersebut belum terisi, elemen dapat langsung disimpan di sana. Namun, jika indeks sudah terisi oleh elemen lain, langkah-langkah untuk menangani tabrakan diperlukan. Ini mungkin melibatkan langkah-langkah seperti menghitung hash code untuk kunci menggunakan fungsi hash, kemudian menggunakan hash code tersebut untuk menentukan indeks dalam tabel. Jika slot yang ditentukan masih kosong, elemen baru dapat disimpan di sana. Namun, jika slot sudah terisi, maka teknik penanganan tabrakan akan digunakan untuk mencari slot kosong.

- Pencarian (Searching)

    <p align= "justify"> Dalam pencarian elemen dengan kunci tertentu, proses dimulai dengan menggunakan fungsi hash untuk menentukan indeks dari kunci tersebut dalam tabel. Jika elemen ditemukan di indeks tersebut, elemen tersebut akan dikembalikan. Namun, jika elemen tidak ditemukan di indeks tersebut, langkah-langkah untuk menangani tabrakan diperlukan. Langkah-langkah ini mungkin melibatkan perhitungan hash code untuk kunci menggunakan fungsi hash, kemudian menggunakan hash code tersebut untuk menentukan indeks dalam tabel. Setelah itu, elemen di indeks tersebut akan diperiksa. Jika elemen tidak sesuai dengan yang dicari, teknik penanganan tabrakan akan digunakan untuk mencari elemen di slot lain yang relevan.

- Penghapusan (Deletion)

    <p align="justify">Untuk menghapus elemen dengan kunci tertentu, pertama-tama gunakan fungsi hash untuk menentukan indeks kunci tersebut dalam tabel. Setelah menemukan elemen di indeks tersebut atau di slot lain yang relevan, elemen tersebut dihapus. Teknik penanganan tabrakan kemudian digunakan untuk memastikan struktur tabel tetap konsisten. Langkah-langkahnya meliputi menghitung kode hash untuk kunci, menggunakan kode hash untuk menentukan indeks dalam tabel, mencari elemen di indeks tersebut atau di slot lain yang relevan, menghapus elemen, dan memperbarui struktur tabel sesuai dengan teknik penanganan tabrakan.
    
### Kelebihan Hash Table :
- Menghemat Ruang Penyimpanan : Hash table dapat menghemat ruang penyimpanan dengan cara mengkonversi data menjadi nilai hash yang lebih kecil.

- Mengurangi Waktu Pengembangan : Hash table dapat mengurangi waktu pengembangan dengan cara mengurangi kompleksitas kode.

- Efisiensi Waktu : Hash table dapat mengakses data dengan cepat dan efisien.

### Kekurangan Hash Table 
- Collision : Hash table dapat mengalami collision ketika dua key memiliki nilai hash yang sama.

- Mengurangi Performa : Hash table dapat mengurangi performa jika tidak digunakan dengan benar.




## Guided 1

### Full code screenshoot
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/3084dd7b-643f-454b-b5fe-d56ff4458f3b)

```C++
#include <iostream>
using namespace std;
const int MAX_SIZE = 10;

// Fungsi hash sederhana
int hash_func(int key) {
    return key % MAX_SIZE;
}

// Struktur data untuk setiap node
struct Node {
    int key;
    int value;
    Node* next;
    Node(int key, int value) : key(key), value(value), next(nullptr) {}
};

// Class hash table
class HashTable {
private:
    Node** table;
public:
    HashTable() {
        table = new Node*[MAX_SIZE]();
    }
    ~HashTable() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    // Insertion
    void insert(int key, int value) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                current->value = value;
                return;
            }
            current = current->next;
        }
        Node* node = new Node(key, value);
        node->next = table[index];
        table[index] = node;
    }

    // Searching
    int get(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
        return -1;
    }

    // Deletion
    void remove(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        Node* prev = nullptr;
        while (current != nullptr) {
            if (current->key == key) {
                if (prev == nullptr) {
                    table[index] = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    // Traversal
    void traverse() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                cout << current->key << ": " << current->value << endl;
                current = current->next;
            }
        }
    }
};

int main() {
    HashTable ht;
    // Insertion
    ht.insert(1, 10);
    ht.insert(2, 20);
    ht.insert(3, 30);

    // Searching
    cout << "Get key 1: " << ht.get(1) << endl;
    cout << "Get key 4: " << ht.get(4) << endl;
   
    // Deletion
    ht.remove(4);
   
    // Traversal
    ht.traverse();
   
    return 0;
}
```

### Output 
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/2d6135ec-bd16-413b-af7f-f46b10953629)


<p align="justify"> Kode ini mengimplementasikan hash table. Hash table sendiri merupakan struktur data yang efisien untuk menyimpan dan mengambil pasangan kunci-nilai. Dalam implementasi ini, ukuran hash table ditentukan oleh konstanta MAX_SIZE, yang diberi nilai 10 dalam contoh ini. Fungsi hash sederhana, hash_func, digunakan untuk memetakan kunci ke indeks dalam tabel menggunakan operasi modulo (key % MAX_SIZE). Ini membantu dalam menyebar kunci secara merata ke seluruh rentang indeks yang tersedia, sehingga mengurangi kemungkinan tabrakan. Setiap elemen dalam hash table direpresentasikan oleh struktur data Node. Setiap node memiliki dua atribut utama: key dan value, yang mewakili pasangan kunci-nilai, serta next, yang adalah pointer ke node berikutnya dalam daftar terkait. Ini memungkinkan penanganan tabrakan dengan chaining, di mana setiap indeks dalam tabel dapat memiliki beberapa node terkait yang membentuk sebuah linked list. Kelas HashTable adalah inti dari implementasi ini. Pada konstruktor HashTable(), memori dialokasikan untuk tabel hash sebagai array dari pointer ke Node dengan ukuran MAX_SIZE. Setiap elemen array diinisialisasi ke nullptr. Destruktor ~HashTable() bertanggung jawab untuk membersihkan memori yang digunakan oleh tabel dengan menghapus setiap node dalam tabel. Fungsi insert digunakan untuk menyisipkan pasangan kunci-nilai ke dalam hash table. Fungsi ini menemukan indeks menggunakan fungsi hash, lalu menelusuri daftar pada indeks tersebut. Jika kunci sudah ada, nilai yang terkait diperbarui; jika tidak, node baru dibuat dan dimasukkan di awal daftar. Fungsi get digunakan untuk mencari nilai yang terkait dengan kunci tertentu. Ini menggunakan fungsi hash untuk menemukan indeks, lalu menelusuri daftar pada indeks tersebut. Jika kunci ditemukan, nilainya dikembalikan; jika tidak, fungsi mengembalikan -1. Fungsi remove digunakan untuk menghapus pasangan kunci-nilai dari hash table. Ini juga menggunakan fungsi hash untuk menemukan indeks, lalu menelusuri daftar pada indeks tersebut untuk mencari node dengan kunci yang sesuai. Jika ditemukan, node dihapus dari daftar. Fungsi traverse digunakan untuk mencetak semua pasangan kunci-nilai dalam hash table. Ini iterasi melalui setiap indeks dalam tabel dan mencetak semua node yang ada pada setiap indeks. Di dalam fungsi main, kita membuat instance dari HashTable, menyisipkan beberapa pasangan kunci-nilai, dan menunjukkan penggunaan fungsi pencarian, penghapusan, dan traversal.

## Guided 2

### Full code screenshoot
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/757f08da-fd9e-4d3e-8301-a18b78d49a45)


```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;

class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);

        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);

        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }

    string searchByName(string name) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                return node->phone_number;
            }
        }
        return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;

    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    cout << "Nomer Hp Mistah : " << employee_map.searchByName("Mistah") << endl;
    cout << "Phone Hp Pastah : " << employee_map.searchByName("Pastah") << endl;

    employee_map.remove("Mistah");

    cout << "Nomer Hp Mistah setelah dihapus : " << employee_map.searchByName("Mistah") << endl << endl;

    cout << "Hash Table : " << endl;

    employee_map.print();

    return 0;
}
```

### Output 
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/527792d2-9b95-4cd3-93b8-bbc881f84cf7)

<p align="justify">Kode di atas adalah implementasi sederhana dari hash table. Dalam hash table ini, setiap entri tabel adalah vektor yang menampung objek HashNode, yang memiliki atribut name dan phone_number. Fungsi hashFunc digunakan untuk menghitung hash value dari nama. Kemudian, fungsi insert digunakan untuk memasukkan pasangan kunci-nilai baru ke dalam hash table. Fungsi ini mengecek apakah nama sudah ada dalam vektor yang sesuai dengan hash value-nya. Jika sudah ada, nomor teleponnya diperbarui; jika tidak, pasangan kunci-nilai baru dimasukkan. Fungsi remove digunakan untuk menghapus pasangan kunci-nilai berdasarkan nama. Ini mencari nama dalam vektor yang sesuai dengan hash value dari nama tersebut dan menghapusnya jika ditemukan. Fungsi searchByName digunakan untuk mencari nomor telepon berdasarkan nama. Ini mencari nama dalam vektor yang sesuai dengan hash value dari nama tersebut dan mengembalikan nomor teleponnya jika ditemukan. Fungsi print digunakan untuk mencetak seluruh isi hash table. Di dalam main, sebuah instance dari HashMap dibuat. Beberapa pasangan kunci-nilai dimasukkan, lalu fungsi pencarian, penghapusan, dan pencetakan digunakan untuk mengonfirmasi operasi hash table yang benar.


## Unguided 

<p align="justify"> Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan :

A. Setiap mahasiswa memiliki NIM dan nilai.

B. Program memiliki tampilan pilihan menu berisi poin C.

C. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90).


### Full code screenshoot
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/7cb934bb-7a9f-4849-abf4-3f90394b2d75)

```C++
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
```
### Output
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/25c0b057-c142-4cc0-b8b6-150abcda8bd0)

#### Menambahkan data 
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/ab30d48b-5473-4820-a086-db551f80a2d2)


#### Menghapus data 
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/a2bfbec1-f100-4853-8245-30d4b3899321)

#### Mencari data 
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/7740fd49-c273-40fd-855a-2f5a9ad3e4ca)

#### Menampilkan data dengan range nilai (80 - 90) 
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/4abd8c28-c335-4c6f-9372-dc406ab8fbe2)


<p align="justify">Kode di atas adalah implementasi dari struktur data hash table yang dirancang untuk menyimpan data mahasiswa. Struktur data `Mahasiswa` merepresentasikan setiap entitas mahasiswa dalam program, dengan dua atribut utama: NIM (Nomor Induk Mahasiswa) dan nilai. Ini memungkinkan kita untuk menyimpan informasi yang unik dan spesifik tentang setiap mahasiswa.

Dalam hash table ini, ketika terjadi tabrakan (collision), digunakan teknik chaining sebagai solusi. Teknik chaining ini berarti jika dua atau lebih data di-hash ke indeks yang sama, sebuah linked list akan dibuat di indeks tersebut untuk menampung data-data tersebut secara berurutan. `HashNode` digunakan sebagai struktur data dalam chaining, di mana setiap node menyimpan data mahasiswa dan pointer ke node berikutnya.

Kelas `HashTable` merupakan inti dari struktur data hash table ini. Pada implementasi ini, ukuran hash table ditetapkan sebagai konstanta `TABLE_SIZE`. Ketika ingin memasukkan atau mencari data, kita menghitung nilai hash dari NIM mahasiswa menggunakan fungsi `hashFunc`, yang menentukan indeks di mana data akan disimpan atau dicari.

Fungsi `insert` digunakan untuk menambahkan data mahasiswa ke dalam hash table. Jika terjadi tabrakan, data akan dimasukkan ke dalam linked list yang terkait. Fungsi `remove` digunakan untuk menghapus data mahasiswa berdasarkan NIM. Kita mencari data mahasiswa dengan NIM yang sesuai, dan jika ditemukan, data tersebut dihapus dari linked list.

Fungsi `searchByNIM` digunakan untuk mencari data mahasiswa berdasarkan NIM. Kita mencari data mahasiswa dengan NIM yang sesuai, dan jika ditemukan, data tersebut dikembalikan. Fungsi `searchByNilai` digunakan untuk mencari data mahasiswa berdasarkan rentang nilai. Fungsi ini melakukan iterasi melalui semua data dalam hash table, dan jika nilai mahasiswa berada dalam rentang yang diinginkan, data tersebut ditambahkan ke dalam hasil pencarian.

Di dalam fungsi `main`, program menampilkan menu pilihan kepada pengguna. Pengguna dapat memilih operasi yang ingin dilakukan, seperti menambah data mahasiswa, menghapus data mahasiswa, mencari data berdasarkan NIM, mencari data berdasarkan rentang nilai, atau keluar dari program. Setiap operasi akan menampilkan hasilnya sesuai dengan permintaan pengguna.


## Kesimpulan
<p align="justify">Hash table adalah struktur data yang menyimpan data dalam pasangan kunci-nilai, di mana setiap elemen memiliki kunci yang unik. Struktur ini memungkinkan akses cepat ke data dengan menggunakan fungsi hash yang menghasilkan indeks unik untuk setiap kunci. Namun, tabrakan bisa terjadi ketika dua kunci menghasilkan indeks yang sama dalam tabel hash. Untuk mengatasi tabrakan ini, sering digunakan teknik chaining, di mana elemen-elemen dengan indeks yang sama disimpan dalam bentuk linked list di lokasi tersebut. Hash table mendukung operasi-operasi dasar seperti penambahan, penghapusan, dan pencarian data. Dengan penggunaan fungsi hash yang efisien, operasi-operasi ini dapat dilakukan dalam waktu konstan, membuat hash table sangat efisien untuk aplikasi yang membutuhkan akses cepat ke data. Hash table digunakan dalam berbagai aplikasi, termasuk basis data, implementasi kamus, caching, dan pencarian data dalam berbagai bahasa pemrograman. Meskipun demikian, hash table juga memiliki beberapa kelemahan. Salah satu keterbatasannya adalah penggunaan memori yang bisa menjadi signifikan, tergantung pada faktor pengisian tabel (load factor). Selain itu, pemilihan fungsi hash yang kurang efisien dapat mengurangi kinerja hash table secara keseluruhan.

## Referensi

[1] Weiss, M. A. (2011). Data Structures and Algorithm Analysis in C++ (4th ed.). Addison-Wesley.

[2] S. Sugiyanti, A. S. Budi, "Implementasi Tabel Hash untuk Pencarian Data pada Sistem Informasi,"