 <h1 align="center">Laporan Praktikum Modul Rekursif</h1>
<p align="center">Muhammad Iqbal</p>

## Dasar Teori
<p align="justify">Rekursi adalah metode di mana sebuah fungsi atau prosedur memanggil dirinya sendiri dalam proses pengulangannya. Dalam pendekatan ini, fungsi tersebut terus melakukan pemanggilan berulang terhadap dirinya sendiri, menciptakan siklus rekursif. Elemen kunci dalam rekursi adalah adanya kondisi terminasi yang menentukan kapan proses rekursi harus dihentikan. Tanpa kondisi terminasi yang tepat, fungsi tersebut akan terus berlanjut memanggil dirinya sendiri tanpa henti, hingga batas memori tercapai akibat banyaknya panggilan rekursif.

<p align="justify">Dibandingkan dengan pendekatan iteratif, kode rekursif biasanya lebih ringkas dan sering kali lebih mudah dipahami. Keunggulan ini terutama terlihat saat menangani masalah kompleks yang dapat dipecah menjadi sub-masalah serupa. Pendekatan rekursif dapat menyederhanakan solusi untuk masalah seperti pengurutan, pencarian, dan penjelajahan data. Misalnya, dalam kasus pengurutan, kita dapat membagi masalah menjadi sub-masalah yang lebih kecil, seperti membagi array menjadi dua bagian, lalu mengurutkan setiap bagian secara terpisah. Metode ini, yang dikenal sebagai divide-and-conquer, secara alami cocok dengan pemikiran rekursif, di mana pembagian masalah menjadi sub-masalah yang lebih kecil memungkinkan kita menyusun kembali solusi akhir dengan cara yang terstruktur. Namun, penting untuk menggunakan rekursi dengan bijak. Meskipun memiliki keuntungan dalam hal kejelasan dan kemudahan implementasi, rekursi juga dapat menimbulkan overhead kinerja dan risiko kehabisan memori jika tidak dikelola dengan baik. Oleh karena itu, saat menggunakan rekursi, penting untuk memastikan adanya kondisi terminasi yang jelas dan menghindari risiko kelebihan panggilan rekursif yang tidak terkendali.

<p align="justify">Fungsi rekursif adalah konsep dalam pemrograman di mana sebuah fungsi memanggil dirinya sendiri untuk menyelesaikan suatu masalah. Sebagai contoh, dalam menghitung faktorial dari sebuah bilangan, fungsi faktorial akan terus memanggil dirinya sendiri dengan bilangan yang lebih kecil, mengalikan setiap bilangan tersebut hingga mencapai angka 1, yang berfungsi sebagai kondisi dasar. Penggunaan rekursi memerlukan kehati-hatian, karena tanpa kondisi dasar yang tepat, fungsi akan terus memanggil dirinya sendiri tanpa henti, menyebabkan kelebihan beban memori dan membuat program tidak responsif. Oleh karena itu, sangat penting memastikan bahwa setiap panggilan rekursif mengarah ke kondisi dasar yang dapat dicapai.



### Rekursif Langsung
<p align="justify">Rekursi langsung terjadi ketika sebuah fungsi memanggil dirinya sendiri secara langsung dalam tubuh fungsi tersebut. Dalam skenario ini, fungsi memecah masalah yang lebih besar menjadi masalah yang lebih kecil, yang kemudian diselesaikan dengan cara yang sama. Contoh umum dari rekursi langsung adalah perhitungan faktorial. Pada fungsi faktorial, ketika fungsi dipanggil dengan sebuah angka, ia akan memanggil dirinya sendiri dengan angka yang lebih kecil dan mengalikan angka tersebut dengan hasil rekursi sebelumnya. Proses ini berlanjut hingga mencapai kondisi dasar, biasanya ketika angka tersebut mencapai 1.
Rekursi langsung mudah dipahami dan diimplementasikan karena konsepnya yang sederhana. Namun, perlu diingat bahwa rekursi langsung bisa menimbulkan masalah kinerja jika tidak dikelola dengan baik. Setiap panggilan fungsi menambah frame baru ke dalam stack pemanggilan, yang dapat menyebabkan overhead memori yang signifikan jika jumlah panggilan rekursif sangat besar. Oleh karena itu, penting untuk memastikan bahwa kondisi dasar tercapai dengan baik dan mempertimbangkan efisiensi kinerja saat menggunakan rekursi langsung.

#### Kelebihan 

- Rekursi langsung sering lebih mudah dipahami karena konsepnya yang jelas dan langsung. Hal ini membuat kode lebih mudah dipelajari dan dimodifikasi.

- Konsep rekursi langsung dapat diimplementasikan dengan sederhana dan mudah dimengerti. Ini menjadikannya pilihan yang baik untuk masalah yang membutuhkan solusi rekursif.

- Biasanya, rekursi langsung memerlukan lebih sedikit kode dibandingkan dengan rekursi tidak langsung untuk mencapai solusi yang sama.

#### Kekurangan 
- Rekursi langsung sering memerlukan lebih banyak sumber daya, seperti memori, dan dapat menyebabkan overhead kinerja yang signifikan, terutama ketika jumlah panggilan rekursif sangat besar.

- Jika tidak dikelola dengan baik, rekursi langsung dapat menyebabkan stack overflow, yaitu kondisi di mana stack pemanggilan melebihi kapasitas memori yang tersedia, yang dapat menyebabkan program berhenti berfungsi.

- Dalam kasus masalah yang kompleks, rekursi langsung mungkin sulit dipahami dan memerlukan lebih banyak perencanaan serta pemahaman mendalam tentang struktur program.


### Rekursif Tidak Langsung
<p align="justify">Rekursi tidak langsung terjadi ketika sebuah fungsi memanggil fungsi lain, yang kemudian secara tidak langsung memanggil kembali fungsi aslinya. Dalam rekursi tidak langsung, terdapat setidaknya dua fungsi yang berinteraksi dalam proses rekursif ini. Salah satu fungsi memanggil fungsi lainnya, yang kemudian dapat memanggil kembali fungsi pertama atau fungsi lain. Rekursi tidak langsung adalah pola dalam pemrograman di mana fungsi saling memanggil satu sama lain secara tidak langsung, menciptakan siklus rekursif. Contohnya dapat ditemukan dalam struktur data seperti pohon, di mana sebuah fungsi memanggil dirinya sendiri untuk menelusuri setiap simpul dalam pohon, namun juga dapat memanggil fungsi lain untuk menelusuri cabang-cabang pohon. Rekursi tidak langsung lebih kompleks dalam pemahaman dan implementasinya dibandingkan dengan rekursi langsung, karena melibatkan beberapa fungsi yang saling berhubungan.

Penggunaan rekursi tidak langsung sering memerlukan perencanaan yang lebih teliti dan pemahaman mendalam tentang struktur program serta masalah yang sedang dihadapi. Konsep ini dapat lebih rumit karena melibatkan fungsi-fungsi yang berbeda dan hubungan di antara mereka, sehingga membutuhkan perencanaan yang lebih cermat.


#### Kelebihan 
- Rekursi tidak langsung memberikan fleksibilitas tambahan dengan memungkinkan interaksi antara berbagai fungsi, yang dapat menghasilkan solusi lebih adaptif untuk masalah kompleks.

- Dalam beberapa kasus, rekursi tidak langsung dapat menawarkan kinerja yang lebih baik melalui manajemen memori yang lebih efisien dan pengurangan overhead yang sering terjadi pada rekursi langsung.

- Rekursi tidak langsung dapat menyederhanakan implementasi kode untuk masalah kompleks dengan memungkinkan pemisahan tanggung jawab di antara fungsi-fungsi yang berbeda, membuat kode lebih terorganisir dan mudah dikelola.

#### Kekurangan
- Rekursi tidak langsung sering lebih kompleks dalam hal pemahaman dan implementasi karena melibatkan interaksi antara beberapa fungsi yang berbeda.

- Kode yang menggunakan rekursi tidak langsung mungkin lebih sulit dipahami dibandingkan dengan kode yang menggunakan rekursi langsung, disebabkan oleh keterlibatan berbagai fungsi.

- Rekursi tidak langsung mungkin menghasilkan lebih banyak kode dibandingkan dengan rekursi langsung, karena adanya keterlibatan fungsi-fungsi tambahan.


## Guided 1

### Full code screenshoot
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/488bb4b9-5f17-422b-8319-158648d69b39)

```C++
#include <iostream>
using namespace std;

void countdown(int n){
    if (n==0) {
        return;
    }

    cout << n << " ";
    countdown (n-1);

}

int main (){
    cout << "rekursif langsung: ";
    countdown(5);
    cout << endl;
    return 0;
}
```

### Output 
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/21639818-d960-4a03-ae43-523be980a64a)

<p align="justify"> Kode di atas adalah contoh implementasi rekursi langsung. Fungsi countdown menerima satu argumen integer n dan mencetak nilai n, kemudian memanggil dirinya sendiri dengan nilai n-1 sebagai argumen. Proses ini terus berlanjut hingga n mencapai nilai 0, di mana fungsi berhenti memanggil dirinya sendiri dan mengembalikan nilai tanpa melakukan apapun. Dalam fungsi main, program memanggil fungsi countdown dengan argumen 5, sehingga akan mencetak angka 5, 4, 3, 2, 1 secara berurutan. Kode ini mengilustrasikan konsep rekursi langsung, di mana fungsi countdown memanggil dirinya sendiri secara langsung dengan nilai yang lebih kecil sebagai bagian dari prosesnya. Oleh karena itu, ketika program dijalankan, hasilnya adalah penghitungan mundur dari 5 hingga 1, sesuai dengan nilai yang diberikan kepada fungsi countdown.

## Guided 2

### Full code screenshoot
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/b9c8243d-e350-4cf1-b2c5-99c1e40f5ce8)


```C++
#include <iostream>
using namespace std;

void functionB(int n);


void functionA (int n){
    if (n > 0){
        cout << n << " ";
        functionB (n-1);
    }
}

void functionB (int n){
    if (n > 0){
        cout << n << " ";
        functionA (n / 2);
    }
}

int main (){
    int num = 5;
    cout << "rekursif tidak langsung: ";
    functionA (num);
    return 0;

}
```

### Output 
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/a53d67d2-7576-4232-8b0e-b6054a86abad)


<p align="justify"> Program di atas adalah contoh rekursi tidak langsung. Terdiri dari dua fungsi utama, yaitu `functionA` dan `functionB`. Fungsi `functionA` memiliki parameter integer `n`. Jika `n` lebih besar dari 0, fungsi akan mencetak nilai `n` menggunakan `cout`, kemudian memanggil fungsi `functionB` dengan parameter `n-1`. Fungsi `functionB` juga memiliki parameter integer `n`. Jika nilai `n` lebih besar dari 0, fungsi akan mencetak nilai `n` menggunakan `cout`, kemudian memanggil fungsi `functionA` dengan parameter `n/2`.

Proses dimulai dengan pemanggilan `functionA` dengan argumen 5. Ini mencetak 5 ke layar, dan memanggil `functionB` dengan argumen 4. Kemudian `functionB` mencetak 4 ke layar, dan memanggil `functionA` dengan argumen 2 (4 dibagi 2). Proses ini berlanjut hingga mencapai nilai 0, di mana fungsi-fungsi hanya mencetak nilai `n` ke layar tanpa melakukan pemanggilan rekursif lebih lanjut.

Di dalam `main`, program mendeklarasikan variabel `num` dengan nilai 5. Kemudian mencetak teks "rekursi tidak langsung: ", dan memanggil `functionA` dengan argumen `num`. Proses ini mencetak urutan nilai 5, 4, 2, dan 1 ke layar.

## Unguided 

### <p align="justify"> 1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!

### Full code screenshoot
![full3](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/af61d9b0-f1e2-4840-8893-75a780ebbc8a)


```C++
#include <iostream>
using namespace std;


int faktorial(int n) {
    // jika n adalah 0 atau 1, maka faktorialnya adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int bilangan;
    // Masukkan bilangan 
    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    // Memeriksa apakah bilangan positif
    if (bilangan < 0) {
        cout << "Masukan bilangan bulat positif!!!" << endl;
    } else {
        // Menghitung faktorial
        cout << "Faktorial dari " << bilangan << " adalah: " << faktorial(bilangan) << endl;
    }

    return 0;
}
```
### Output
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/26df5c52-0152-4536-b455-cfb0b6f88560)
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/8f4d14e0-2b51-4c20-9fc3-0c8023d92c26)

<p align="justify">Kode di atas adalah implementasi rekursi langsung untuk menghitung nilai faktorial dari sebuah bilangan bulat positif. Fungsi `factorial` didefinisikan untuk menghitung faktorial dari bilangan bulat positif `n`. Dalam fungsi tersebut, terdapat dua kondisi: jika `n` adalah 0 atau 1, maka nilai faktorialnya adalah 1. Jika tidak, nilai faktorialnya adalah `n` dikalikan dengan faktorial dari `n-1`.

Dalam `main`, program meminta pengguna untuk memasukkan bilangan bulat positif. Kemudian, program memeriksa apakah bilangan yang dimasukkan adalah bilangan bulat positif. Jika ya, program akan menghitung faktorialnya menggunakan fungsi `factorial` dan mencetak hasilnya ke layar. Jika tidak, program akan mencetak pesan kesalahan, yaitu "Masukkan bilangan bulat positif!".

Jika kita memasukkan bilangan negatif seperti -5, program akan mencetak "Masukkan bilangan bulat positif!". Namun, jika kita memasukkan bilangan positif seperti 5, program akan menghitung faktorialnya dan mencetak hasilnya, misalnya "Faktorial dari 5 adalah: 120".


### <p align="justify"> 2. Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 diatas!

### Full code screenshoot
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/e78b25ff-45b3-41a0-99a1-5b324bd8e925)

```C++
#include <iostream>
using namespace std;

// Fungsi untuk menghitung faktorial
int a(int n) {
    // Jika n adalah 0 atau 1, maka faktorialnya adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        int hasil =a(n - 1);
        return n * hasil;
    }
}

// Fungsi untuk menghitung faktorial secara tidak langsung
int b(int n) {
    // Jika n adalah 0 atau 1, maka faktorialnya adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        int hasil = b(n - 1);
        return n * hasil;
    }
}

int main() {
    int bilangan;
    // Masukkan bilangan 
    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    // Memeriksa apakah bilangan positif
    if (bilangan < 0) {
        cout << "Masukan bilangan bulat positif!!!" << endl;
    } else {
        // Menghitung faktorial secara tidak langsung
        cout << "Faktorial dari " << bilangan << " adalah: " << b(bilangan) << endl;
    }

    return 0;
}
```
### Output
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/1a1234cf-807e-4c9a-9b37-e146ac809407)

<p align="justify">Kode di atas merupakan implementasi untuk menghitung nilai faktorial dari sebuah bilangan bulat positif menggunakan rekursi tak langsung. Pada fungsi faktorial terdapat dua fungsi yang sama untuk menghitung faktorial yakni, int a(int n) fungsi ini menghitung faktorial dari bilangan bulat n menggunakan pendekatan rekursi langsung. Artinya, fungsi ini memanggil dirinya sendiri secara langsung untuk menghitung faktorial. Int b(int n) fungsi ini juga menghitung faktorial dari bilangan bulat n, namun menggunakan pendekatan rekursi tidak langsung. Ini berarti fungsi ini memanggil fungsi a secara tidak langsung untuk menghitung faktorial. Pada fungsi main, kita diminta untuk memasukkan sebuah bilangan bulat positif. Kemudian program memeriksa apakah bilangan yang dimasukkan adalah bilangan bulat positif. Jika benar, maka program memanggil salah satu fungsi faktorial. Hasil perhitungan faktorial kemudian dicetak.  Pada rekursif tak langsung suatu fungsi memanggil fungsi lain, yang kemudian memanggil fungsi pertama kembali. Dalam kode di atas, b() adalah contoh rekursi tidak langsung, karena meskipun pada akhirnya memanggil fungsi yang sama, tetapi melalui perantara fungsi lain.

## Kesimpulan
<p align="justify">Rekursi dalam pemrograman dapat diterapkan dalam dua bentuk utama: rekursi langsung dan tidak langsung. Rekursi langsung terjadi ketika sebuah fungsi memanggil dirinya sendiri secara langsung untuk menyelesaikan tugas tertentu. Pendekatan ini menghasilkan implementasi yang sederhana dan langsung karena tidak ada perantara fungsi lain yang terlibat. Meskipun demikian, rekursi langsung biasanya lebih efisien dalam hal kinerja karena tidak melibatkan lapisan tambahan dari fungsi perantara. Selain itu, rekursi langsung cenderung lebih mudah dipahami dan diimplementasikan karena tidak ada kompleksitas tambahan yang disebabkan oleh perantara fungsi. Di sisi lain, rekursi tidak langsung terjadi ketika sebuah fungsi memanggil fungsi lain, yang kemudian memanggil fungsi pertama kembali. Dalam hal ini, perantara fungsi lain diperlukan untuk melakukan pemanggilan rekursif, memberikan fleksibilitas dalam cara pemanggilan fungsi. Rekursi tidak langsung dapat menyediakan tingkat abstraksi yang lebih tinggi, memungkinkan pemisahan antara fungsi dasar dan fungsi perantara. Namun, implementasinya cenderung lebih kompleks dan memerlukan lebih banyak pemikiran untuk memahami alur kerja program. Dalam memilih antara rekursi langsung dan tidak langsung, penting untuk mempertimbangkan kompleksitas masalah yang dihadapi, preferensi programmer, serta pertimbangan kinerja dan kejelasan kode.

## Referensi

[1] Algorithms" oleh Robert Sedgewick dan Kevin Wayne

[2] Grokking Algorithms: An Illustrated Guide for Programmers and Other Curious People
