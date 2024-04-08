 <h1 align="center">Laporan Praktikum Modul Searching</h1>
<p align="center">Muhammad Iqbal</p>

## Dasar Teori
<p align="justify"> Searching, sebuah konsep mendasar dalam dunia pemrograman dan ilmu komputer secara luas, merujuk pada proses untuk menemukan elemen spesifik dalam suatu himpunan data atau struktur data. Lebih dari sekadar aplikasi dalam dunia komputasi, Searching juga merentang ke kehidupan sehari-hari, menjadi metode yang digunakan untuk memperoleh informasi atau item yang diinginkan dari sejumlah data yang lebih besar. Kumpulan data yang menjadi objek Searching dapat berupa berbagai jenis, mulai dari array, list, string, basis data, hingga struktur data kompleks seperti pohon dan graf.
Dalam dunia ilmu komputer, ada beragam jenis Searching yang digunakan, masing-masing memiliki pendekatan dan metode tersendiri dalam menemukan elemen yang diinginkan. Sebagai contoh, beberapa jenis Searching meliputi pencarian linier, pencarian biner, pencarian hashing, dan lainnya. Melalui pendekatan yang tepat, Searching dapat menjadi alat yang sangat efektif dalam mengelola dan memanipulasi data.

### 1. Sequential Search

<p align="justify">
Sequential search, atau yang lebih umum dikenal sebagai linear search, merupakan metode pencarian yang cukup sederhana namun efektif dalam menemukan suatu elemen dalam sebuah himpunan data. Pendekatan ini melibatkan pengunjungan satu per satu terhadap setiap elemen dalam kumpulan data, dimulai dari elemen pertama hingga elemen terakhir, untuk menemukan elemen yang dicari. Jika elemen tersebut ditemukan selama proses pencarian, pencarian dihentikan, dan informasi tentang posisi elemen dapat diperoleh. Namun, jika elemen tidak ditemukan setelah semua elemen diuji, pencarian diakhiri dengan menyatakan bahwa elemen tersebut tidak ada dalam himpunan data yang diberikan.
Sequential search ini biasanya digunakan ketika data tidak diurutkan, atau ketika ukuran data relatif kecil sehingga efisiensi pencarian bukanlah prioritas utama. Meskipun sederhana, metode ini memiliki kejelasan dan kemudahan dalam implementasi. Namun, pada skala data yang besar atau ketika efisiensi pencarian menjadi fokus utama, metode ini mungkin tidak efisien.Langkah-langkah dalam sequential search adalah sebagai berikut: Pertama, inisialisasi variabel seperti 'found' untuk menandai apakah elemen ditemukan, dan 'position' untuk menyimpan indeks elemen jika ditemukan. Selanjutnya, dilakukan looping melalui setiap elemen dalam kumpulan data menggunakan loop for atau while. Pada setiap iterasi, dilakukan pengecekan apakah elemen saat itu sama dengan elemen yang dicari. Jika iya, maka nilai 'found' diubah menjadi true, dan indeks elemen tersebut disimpan di variabel 'position'. Jika tidak, iterasi dilanjutkan ke elemen berikutnya. Setelah loop selesai, dilakukan pengecekan nilai 'found'. Jika 'found' adalah true, itu berarti elemen ditemukan, dan nilai 'position' dapat digunakan untuk mengakses atau melakukan operasi apa pun pada elemen yang ditemukan. Jika 'found' adalah false, itu berarti elemen yang dicari tidak ada dalam kumpulan data.Dengan demikian, sequential search merupakan proses sederhana di mana setiap elemen secara berurutan diperiksa untuk menemukan elemen yang dicari.

### 2. Binary Search

<p align="justify">Binary search merupakan sebuah algoritma pencarian yang efisien dan umum digunakan untuk menemukan elemen tertentu dalam kumpulan data yang sudah diurutkan. Pendekatan ini menawarkan struktur yang lebih terorganisir dan efektif dibandingkan dengan metode pencarian sekuensial. Dalam binary search, data dibagi menjadi dua bagian secara berulang untuk mempersempit area pencarian. Proses dimulai dengan menentukan titik tengah dari data yang diurutkan, kemudian memeriksa apakah elemen yang dicari berada di bagian kiri atau kanan dari titik tengah tersebut. Jika lebih kecil dari elemen tengah, pencarian dilanjutkan pada setengah kiri data; sementara jika lebih besar, pencarian dilakukan pada setengah kanan data. Langkah-langkah ini terus diulang secara rekursif atau iteratif hingga elemen yang dicari ditemukan atau tidak ada lagi elemen yang dapat diperiksa. Keunggulan utama binary search terletak pada kompleksitas waktu yang relatif rendah, yaitu O(log n), di mana n adalah jumlah elemen dalam data. Ini menjadikannya pilihan yang sangat efisien untuk data yang besar. Selain itu, binary search dapat diimplementasikan dengan baik dalam berbagai konteks, termasuk struktur data seperti array, list terurut, pohon biner pencarian, dan sebagainya.Namun, binary search juga memiliki beberapa keterbatasan yang perlu dipertimbangkan. Pertama, hanya dapat digunakan pada data yang sudah diurutkan, sehingga memerlukan proses pengurutan tambahan jika data belum terurut. Kedua, tidak efektif jika data sering berubah, karena memerlukan pengurutan ulang setiap kali ada perubahan data. Terakhir, kesalahan implementasi dapat mengakibatkan hasil pencarian yang tidak akurat atau bahkan error logika.

Langkah-langkah dalam binary search adalah sebagai berikut:

1. Pastikan bahwa data yang akan dicari sudah diurutkan. Binary search hanya efektif pada data yang terurut.
2. Tentukan batas awal dan akhir dari kumpulan data yang akan dicari dengan mengatur variabel 'left' dan 'right'. Variabel 'left' diatur ke indeks pertama (biasanya 0), sementara 'right' diatur ke indeks terakhir dalam data.
3. Gunakan iterasi atau rekursi untuk membagi data menjadi dua bagian dan memeriksa elemen tengah.
   - Dalam iterasi, hitung indeks elemen tengah dengan rumus mid = (left + right) / 2, kemudian bandingkan elemen tengah dengan elemen yang dicari. Sesuaikan rentang pencarian dengan mengubah nilai 'left' atau 'right' berdasarkan hasil perbandingan.
   - Dalam rekursi, buat fungsi rekursif dengan parameter 'left', 'right', dan 'target'. Hitung indeks elemen tengah, kemudian bandingkan dengan elemen yang dicari. Panggil fungsi rekursif untuk rentang yang sesuai dengan hasil perbandingan.
4. Setelah elemen ditemukan, lakukan tindakan yang sesuai dengan kebutuhan aplikasi.
5. Jika elemen tidak ditemukan setelah iterasi atau rekursi selesai, kembalikan nilai yang menunjukkan bahwa elemen tidak ada dalam data.

### 3. Hashing

 <p align="justify">Hashing merupakan teknik penting dalam ilmu komputer yang digunakan untuk mengelola dan mengakses data secara efisien. Dengan hashing, input yang kompleks dikonversi menjadi nilai yang lebih kecil yang disebut hash code. Nilai hash ini digunakan sebagai alamat untuk mengidentifikasi dan mengakses data dalam struktur data yang disebut hash table. Salah satu kegunaan utama hashing adalah untuk indexing dan mengidentifikasi data dalam tabel hash dengan cepat. Proses hashing dimulai dengan menggunakan fungsi hash, yang menghasilkan nilai hash yang unik dan konsisten untuk setiap input. Nilai hash tersebut digunakan untuk menentukan lokasi penyimpanan data terkait dalam hash table. Hash table biasanya berupa array atau struktur data lainnya yang dirancang untuk mendukung akses data yang cepat berdasarkan nilai hash. Saat mencari data, sistem menggunakan nilai hash sebagai kunci untuk menemukan lokasi data dalam hash table, menghindari pencarian sekuensial yang lambat. Namun, tantangan dalam penggunaan hashing adalah tabrakan, yang terjadi ketika dua input yang berbeda menghasilkan nilai hash yang sama. Untuk mengatasi tabrakan, strategi seperti chaining (menggunakan linked list) atau open addressing (mencari lokasi kosong dalam hash table) dapat digunakan.

### 4. Interpolation Search

 <p align="justify">Interpolation search merupakan algoritma pencarian yang digunakan untuk mencari elemen tertentu dalam kumpulan data yang sudah diurutkan, dengan asumsi distribusi data yang merata. Algoritma ini mengadopsi pendekatan yang lebih cerdas dibandingkan dengan binary search, terutama pada situasi di mana distribusi data tidak merata. Interpolation search memanfaatkan estimasi posisi elemen yang dicari berdasarkan perbandingan dengan nilai terkecil dan terbesar dalam data. Dengan menggunakan estimasi tersebut, algoritma dapat mengurangi jumlah iterasi yang diperlukan untuk menemukan elemen yang dicari, sehingga meningkatkan efisiensi pencarian. Mirip dengan binary search, interpolation search juga mengharuskan data dalam keadaan terurut, baik secara naik maupun turun. Kondisi ini penting untuk memastikan keberhasilan algoritma dalam menemukan elemen yang dicari. Estimasi posisi elemen yang dicari dihitung dengan menggunakan persamaan matematika yang bergantung pada distribusi data. Interpolation search menjadi pilihan yang baik dalam situasi di mana distribusi data merata dan pencarian dengan kecepatan tinggi menjadi prioritas utama. Meskipun demikian, perlu diingat bahwa interpolation search memiliki tingkat kompleksitas yang lebih tinggi dibandingkan dengan binary search. Implementasi yang optimal memerlukan pemahaman yang mendalam tentang distribusi data serta pemilihan metode yang tepat.

## Guided 1
### Sequential Search
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/362fe2b0-fc94-4ea7-8b53-f107096ea091)

```C++
#include <iostream>
using namespace std;

int main() {
    int n = 10; // corrected the value of n to 11 to match the number of elements in the data array
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}; // added the last occurrence of the number 10
    int cari = 10;
    bool ketemu = false;
    int i;

    // algoritma Sequential Search
    for (i = 0; i < n; i++) {
        if (data[i] == cari) {
            ketemu = true;
            break;
        }
    }

    cout << "\t Program Sequential Search Sederhana\n" << endl;
    cout << "data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10, 10}" << endl;

    if (ketemu) {
        cout << "\n angka " << cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data" << endl;
    }

    return 0;
}
```
### Output 
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/e276b5f8-d542-4d84-a6b7-0b1ce386f1b4)

<p align="justify"> Implementasi kode di atas adalah contoh dari algoritma pencarian sekuensial (sequential search). Pada awalnya, variabel `n` diberi nilai 10, menandakan terdapat 10 elemen dalam array `data`. Array `data` kemudian diinisialisasi dengan nilai-nilai integer, termasuk nilai 10 sebagai elemen terakhir. Program menggunakan loop for untuk melakukan pencarian sekuensial di dalam array `data`. Pada setiap iterasi, program memeriksa apakah nilai pada indeks ke-i sama dengan nilai yang dicari (`cari`). Jika nilai yang dicari ditemukan dalam array, variabel `ketemu` diubah menjadi true dan loop dihentikan dengan break. Setelah pencarian selesai, program mencetak pesan yang menampilkan hasil pencarian. Jika nilai `ketemu` adalah true, berarti elemen yang dicari ditemukan dalam array, dan program mencetak indeks tempat elemen tersebut ditemukan. Jika tidak ditemukan, program mencetak pesan yang menyatakan bahwa elemen tidak ditemukan dalam data. Hasil pencarian menunjukkan bahwa nilai 10 ditemukan pada indeks ke-9 (array diindeks mulai dari 0). Oleh karena itu, output dari program adalah "angka 10 ditemukan pada indeks ke-9", yang menandakan bahwa nilai yang dicari berhasil ditemukan dalam array dan berada pada indeks ke-9 dari array tersebut. Algoritma sequential search pada kode tersebut bekerja dengan cara memeriksa setiap elemen satu per satu dari awal hingga akhir array, sehingga memiliki kompleksitas waktu O(n), di mana n adalah jumlah elemen dalam array.


## Guided 2
### Binary Search
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/f620377f-1f84-46a3-b00e-25ab0cba058d)

```C++
#include <iostream>
#include <iomanip>
#include <cstdlib> // untuk EXIT_SUCCESS

using namespace std;

int data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for (i = 0; i < 7; i++) {
        min = i;
        for (j = i + 1; j < 7; j++) {
            if (::data[j] < ::data[min]) { 
                min = j;
            }
        }
        temp = ::data[i]; 
        ::data[i] = ::data[min]; 
        ::data[min] = temp; 
    }
}

void binarysearch() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 7;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (::data[tengah] == cari) { 
            b_flag = 1;
            break;
        } else if (::data[tengah] < cari) 
            awal = tengah + 1;
        else
            akhir = tengah - 1;
    }
    if (b_flag == 1)
        cout << "\n Data ditemukan pada indeks ke-" << tengah << endl;
    else
        cout << "\n Data tidak ditemukan\n";
}

int main() {
    cout << "\t BINARY SEARCH" << endl;
    cout << "\n Data      : ";
    // Tampilkan data awal
    for (int x = 0; x < 7; x++)
        cout << setw(3) << ::data[x]; // Menggunakan ::data
    cout << endl;

    cout << "\n Masukkan data yang ingin anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // Urutkan data dengan selection sort
    selection_sort();
    // Tampilkan data setelah diurutkan
    for (int x = 0; x < 7; x++)
        cout << setw(3) << ::data[x]; 

    cout << endl;
    binarysearch();
    cin.get(); 
    return EXIT_SUCCESS; 
}
```
### Output
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/3cca6593-afb8-4e2d-8f23-956176a3e66e)

<p align ="justify">Kode di atas adalah implementasi gabungan antara algoritma pencarian binary search dengan algoritma pengurutan selection sort. Program pertama-tama menginisialisasi sebuah array data yang terdiri dari 7 elemen bilangan bulat. Selanjutnya, program memanggil fungsi selection_sort() untuk mengurutkan elemen-elemen array dari nilai terkecil hingga nilai terbesar. Algoritma selection sort bekerja dengan cara memilih nilai minimum dari sisa array yang belum diurutkan dan menukarnya dengan elemen pertama dari sisa array tersebut. Setelah array diurutkan, program meminta pengguna untuk memasukkan data yang ingin dicari, dan nilai yang dimasukkan disimpan dalam variabel 'cari'. Program kemudian memanggil fungsi binarysearch() untuk mencari nilai 'cari' dalam array yang telah diurutkan. Algoritma binary search membagi data menjadi dua setiap iterasi loop, membandingkan nilai tengah dengan nilai yang dicari. Jika nilai tengah sama dengan nilai yang dicari, pencarian selesai. Jika tidak, program memilih setengah dari data yang mungkin mengandung nilai yang dicari dan melanjutkan pencarian pada setengah tersebut. Setelah pengurutan dan pencarian selesai, program mencetak hasil output. Pertama, program mencetak data awal sebelum diurutkan, kemudian mencetak data setelah diurutkan menggunakan selection sort. Selanjutnya, program mencetak hasil pencarian binary search. Jika data ditemukan, program akan mencetak indeks di mana data tersebut ditemukan dalam array yang diurutkan. Jika tidak ditemukan, program akan mencetak pesan bahwa data tidak ditemukan. Contoh, jika nilai 'cari' adalah 8, maka output menunjukkan bahwa data yang dicari, yaitu 8, ditemukan pada indeks ke-5 setelah array diurutkan menggunakan selection sort, dan dilakukan pencarian menggunakan binary search.

## Unguided 

<p align="justify"> 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di inputkan dengan mengggunakan Binary Search! 

![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/7531d3f2-1553-48c9-bac5-0ec82e681d06)


```C++
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
```
### Output
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/54e04e72-8734-4a41-89dc-1f656a02e5d0)

<p align="justify"> Berikut adalah kode untuk pencarian biner dalam string yang dilengkapi dengan kemampuan pencarian yang tidak memperdulikan huruf besar atau kecil. Program ini meminta pengguna untuk memasukkan sebuah kalimat dan kemudian sebuah huruf yang ingin dicari di dalam kalimat tersebut. Selanjutnya, program akan mencari huruf tersebut dalam kalimat yang telah dimasukkan dengan menggunakan algoritma pencarian biner. Jika huruf tersebut ditemukan, program akan memberitahu pengguna pada indeks mana huruf tersebut ditemukan dalam kalimat. Jika tidak ditemukan, program akan memberitahu pengguna bahwa huruf tersebut tidak ada dalam kalimat.

<p align="justify">2.Buatlah sebuah program yang menghitung banyaknya huruf vokal dalam sebuah kalimat!

![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/6ef68942-a836-410e-b738-bf76ea549638)

```C++
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
```
### Output

![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/fa1079d3-4d75-40f0-b253-5d30b24591f7)



<p align="justify">Kode di atas tidak menggunakan sequential search untuk menghitung jumlah huruf vokal dalam sebuah kalimat. Meskipun ada array yang mirip dengan array yang digunakan dalam sequential search, namun kode ini lebih fokus pada pemrosesan string dan penghitungan. Fungsi `countVowels` bertugas memeriksa setiap karakter dalam kalimat terhadap array vokal yang berisi huruf-huruf vokal ('a', 'e', 'i', 'o', 'u'). Setiap kali karakter dalam kalimat cocok dengan salah satu huruf vokal dalam array, variabel hitung akan bertambah satu. Hal ini dilakukan melalui dua loop bersarang, di mana loop luar mengiterasi setiap karakter dalam kalimat, dan loop dalam mengiterasi setiap huruf vokal dalam array vokal. Saat karakter dalam kalimat adalah huruf vokal, program akan meningkatkan nilai variabel hitung. Setelah semua karakter dalam kalimat diperiksa, fungsi mengembalikan jumlah total huruf vokal yang ditemukan. Pada fungsi `main`, pengguna diminta memasukkan kalimat, yang kemudian diproses menggunakan fungsi `countVowels` untuk menghitung jumlah huruf vokal. Hasilnya kemudian dicetak sebagai output program. Dengan demikian, keseluruhan kode ini lebih berfokus pada pemrosesan string dan penghitungan, dan bukan pada proses pencarian khusus seperti yang terjadi dalam algoritma pencarian seperti sequential search atau binary search.

<p align="justify">3. Diketahui data = 9,4,1,4,7,10,5,4,12,4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/d35dfdee-17ec-437c-ac4a-5b9124e55f36)

```C++
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
```
### Output 


![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/eff274db-8949-4fae-8731-ead6e863c3ab)


<p align="justify"> Program di atas menggunakan vektor untuk menyimpan sejumlah bilangan bulat dan melakukan pencarian untuk menghitung berapa kali sebuah bilangan tertentu muncul dalam vektor tersebut. Pertama-tama, terdapat fungsi `displayNumbers` yang bertugas menampilkan semua angka dalam vektor sebelum operasi pencarian dimulai. Fungsi ini menggunakan loop `for` untuk mengiterasi setiap elemen dalam vektor data. Selama iterasi, setiap elemen vektor dicetak ke layar menggunakan `std::cout`, dengan tanda koma digunakan untuk memisahkan angka-angka kecuali untuk angka terakhir dalam vektor. Akhirnya, fungsi mencetak kurung kurawal penutup untuk menandakan akhir dari data yang ditampilkan. Selanjutnya, ada fungsi `countNumber` yang menerima vektor data dan bilangan bulat target yang akan dicari dalam vektor tersebut. Fungsi ini menggunakan loop `for` untuk mengiterasi setiap elemen dalam vektor data. Saat iterasi, jika elemen vektor sama dengan target, maka nilai counter `count` akan bertambah satu. Setelah selesai iterasi, fungsi mengembalikan nilai `count` yang merupakan jumlah kemunculan target dalam vektor data. Di dalam fungsi `main`, pertama-tama sebuah vektor data diinisialisasi dengan sejumlah bilangan bulat, dan nilai target juga diinisialisasi dengan bilangan bulat tertentu yang akan dicari dalam vektor. Program pertama-tama memanggil fungsi `displayNumbers` untuk menampilkan angka-angka dalam vektor sebelum operasi pencarian dimulai. Selanjutnya, program memanggil fungsi `countNumber` untuk menghitung jumlah kemunculan target dalam vektor data. Hasil perhitungan tersebut kemudian dicetak ke layar bersama dengan pesan yang menjelaskan jumlah angka target yang ditemukan dalam vektor. Sebagai contoh, jika vektor data berisi angka-angka {9, 4, 1, 4, 7, 10, 5, 4, 12, 4} dan target adalah angka 4, maka output yang dihasilkan akan menampilkan angka-angka tersebut dalam format {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}, dan jumlah angka 4 dalam data adalah 4. Hal ini menandakan bahwa angka 4 muncul sebanyak 4 kali dalam vektor yang diberikan.

## Kesimpulan
<p align="justify">Dalam pencarian data, baik binary search maupun sequential search memiliki karakteristik dan kegunaannya tersendiri. Sequential search, yang juga dikenal sebagai linear search, merupakan pendekatan pencarian yang sederhana dan mudah dipahami. Kelebihannya terletak pada kemampuannya untuk mencari nilai dalam kumpulan data yang tidak terurut. Namun, kelemahannya adalah kinerja yang lambat terutama pada data yang besar karena harus memeriksa setiap elemen satu per satu. Di sisi lain, binary search adalah metode pencarian yang lebih efisien, terutama saat bekerja dengan data yang besar dan sudah diurutkan. Pendekatan ini memanfaatkan konsep pembagian data menjadi dua bagian dan hanya memeriksa bagian yang relevan, sehingga kinerjanya sangat cepat. Namun, kelemahannya adalah bahwa data harus diurutkan terlebih dahulu sebelum pencarian dapat dilakukan, dan metode ini hanya dapat digunakan pada data yang sudah diurutkan. Oleh karena itu, pemilihan metode pencarian yang tepat tergantung pada sifat dan kebutuhan data. Binary search lebih cocok digunakan untuk data besar yang sudah diurutkan, seperti dalam struktur data seperti array atau daftar yang sudah diurutkan. Sementara sequential search lebih sesuai untuk data yang tidak terurut atau memiliki jumlah data yang kecil.

## Referensi
http://www.sarjanapedia.com/2019/02/metode-searching-dalam-cpp.html?m=1