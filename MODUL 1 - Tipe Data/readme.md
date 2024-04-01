# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Muhammad Iqbal</p>
<p align="center">2311110013</p>

## Dasar Teori

Tipe data adalah klasifikasi nilai yang digunakan dalam pemrograman untuk menentukan jenis operasi yang dapat dilakukan terhadap data tersebut dan cara data tersebut disimpan dalam memori komputer. Tipe data memungkinkan kompiler atau interpreter untuk memahami bagaimana data akan digunakan oleh program.

## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;
    // It allows user to enter operator i.e. +, -, *, /
    cin >> op;
    // It allow user to enter the operands
    cin >> num1 >> num2;
    // Switch statement begins
    switch (op)
    {
    // If user enter +
    case '+':
        cout << num1 + num2;
        break;
    // If user enter -
    case '-':
        cout << num1 - num2;
        break;
    // If user enter *
    case '*':
        cout << num1 * num2;
        break;
    // If user enter /
    case '/':
        cout << num1 / num2;
        break;
    // If the operator is other than +, -, * or /,
    // error message will display
    default:
        cout << "Error! operator is not correct";
    } // switch statement ends
    return 0;
}

```
Tipe data primitif adalah tipe data yang sudah ditentukan oleh sistem dan disediakan oleh banyak bahasa pemrograman. Perbedaan antara tipe data primitif terletak pada jumlah bit yang dialokasikan untuk setiap tipe data primitif, yang tergantung pada bahasa pemrograman, kompiler, dan sistem operasi yang digunakan. Contoh tipe data primitif termasuk int, float, char, dan boolean.

Tipe data primitif seperti int digunakan untuk menyimpan bilangan bulat seperti 12, 1, 4, dan sebagainya. float digunakan untuk menyimpan bilangan desimal seperti 1.5, 2.1, 3.14, dan sebagainya. char berfungsi untuk menyimpan data berupa huruf atau simbol seperti A, B, C, dan seterusnya. Sedangkan boolean digunakan untuk menyimpan nilai boolean yang hanya memiliki dua nilai yaitu true dan false.


### 2. Tipe Data Abstrak

```C++
#include <stdio.h>

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    // mengisi nilai ke struct
    mhs1.name = "Muhammad Iqbal";
    mhs1.address = "Medan";
    mhs1.age = 19;
    mhs2.name = "Deo";
    mhs2.address = "Padang";
    mhs2.age = 18;

    // mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}

```
Tipe data abstrak atau yang sering disebut sebagai Abstrak Data Type (ADT) adalah tipe data yang dibentuk oleh programmer. Dalam tipe data abstrak, dapat berisi banyak jenis data, sehingga nilainya bisa lebih dari satu dan beragam jenis data. Fitur kelas (Class) adalah salah satu fitur dari pemrograman berorientasi objek (Object-Oriented Programming/OOP) dalam bahasa pemrograman C++, yang memiliki kesamaan dengan fitur struktur data (Struct) dalam bahasa C. Keduanya berfungsi untuk mengelompokkan tipe data di dalamnya sebagai anggota.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
using namespace std;
int main()
{
    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 65;
    nilai[1] = 55;
    nilai[2] = 45;
    nilai[3] = 35;
    nilai[4] = 25;

    //mencetak array
    cout << "Isi array pertama :" << nilai[0]  << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
#include <iostream>

// Fungsi untuk menambahkan dua bilangan bulat
int tambah(int a, int b) {
    return a + b;
}

// Fungsi untuk mengalikan dua bilangan desimal
float kali(float a, float b) {
    return a * b;
}

int main() {
    // Deklarasi variabel
    int angka1 = 5, angka2 = 3;
    float desimal1 = 2.5, desimal2 = 1.5;

    // Panggil fungsi tambah dan cetak hasilnya
    std::cout << "Hasil penambahan: " << tambah(angka1, angka2) << std::endl;

    // Panggil fungsi kali dan cetak hasilnya
    std::cout << "Hasil perkalian: " << kali(desimal1, desimal2) << std::endl;

    return 0;
}
```

#### Output:
![Screenshot 2024-03-10 031851](https://github.com/greyL15ZF/ibal/assets/157208590/918d2c2c-f56a-45b3-8268-5c8ae66c79f4)

Program ini memiliki dua fungsi, yaitu tambah dan kali, yang bertujuan untuk melakukan operasi penambahan dan perkalian. Fungsi tambah menerima dua parameter berupa bilangan bulat (int) dan mengembalikan hasil penjumlahan dari keduanya. Sedangkan fungsi kali menerima dua parameter berupa bilangan desimal (float) dan mengembalikan hasil perkalian dari kedua bilangan tersebut. Di dalam fungsi main, terdapat deklarasi variabel dengan tipe data primitif, seperti int untuk angka bulat dan float untuk angka desimal. Setelah deklarasi variabel, kedua fungsi dipanggil dengan memberikan parameter yang sesuai, dan hasilnya ditampilkan ke layar menggunakan perintah std::cout.

#### Full code Screenshot:
![Screenshot (156)](https://github.com/greyL15ZF/ibal/assets/157208590/2bd2db7a-56d0-467d-823c-83daa517b634)

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

```C++
#include <iostream>

// Contoh Class
class Mobil {
public:
    // Atribut
    std::string merek;
    int tahunProduksi;
    
    // Metode
    void info() {
        std::cout << "Mobil " << merek << ", diproduksi tahun " << tahunProduksi << std::endl;
    }
};

// Contoh Struct
struct Buku {
    // Atribut
    std::string judul;
    std::string penulis;
    int tahunTerbit;
};

int main() {
    // Menggunakan Class
    Mobil mobil1;
    mobil1.merek = "Toyota";
    mobil1.tahunProduksi = 2020;
    mobil1.info(); // Memanggil metode info()

    // Menggunakan Struct
    Buku buku1;
    buku1.judul = "Harry Potter";
    buku1.penulis = "J.K. Rowling";
    buku1.tahunTerbit = 1997;

    std::cout << "Buku " << buku1.judul << " ditulis oleh " << buku1.penulis << " dan diterbitkan tahun " << buku1.tahunTerbit << std::endl;

    return 0;
}
```
#### Output:
![Screenshot 2024-03-10 032644](https://github.com/greyL15ZF/ibal/assets/157208590/4648a074-a1db-4b14-8460-2d8c930ba7ff)

Program tersebut mengilustrasikan penggunaan class (Mobil) dan struct (Buku), di mana class Mobil memiliki atribut merek dan tahunProduksi, serta metode info() untuk menampilkan informasi tentang mobil, sementara struct Buku memiliki atribut judul, penulis, dan tahunTerbit. Dalam fungsi main(), objek mobil1 dan buku1 dibuat menggunakan class dan struct, masing-masing, dan atributnya diakses dan diatur nilainya. Metode info() dari class Mobil dipanggil untuk menampilkan informasi tentang mobil, sedangkan nilai atribut dari struct Buku ditampilkan langsung menggunakan std::cout.

#### Full code Screenshot:
![Screenshot 2024-03-10 033057](https://github.com/greyL15ZF/ibal/assets/157208590/6a9c5e77-62aa-4e4f-aa37-87258d0f860e)

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.

```C++
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

```
#### Output:
![Screenshot 2024-03-10 033722](https://github.com/greyL15ZF/ibal/assets/157208590/4bac0474-74ed-4aa7-8d5b-7e3e1782763e)

Program menggunakan std::map untuk membuat struktur data yang mengaitkan kunci (dalam hal ini, string) dengan nilai (integer). Elemen-elemen ditambahkan ke dalam map menggunakan pasangan kunci-nilai, dan nilai dari sebuah kunci dapat diakses menggunakan operator []. Untuk mengakses semua elemen dalam map, program menggunakan iterator untuk melintasi map dari awal hingga akhir.

Perbedaan antara array dan map adalah bahwa array adalah kumpulan elemen data yang disimpan dalam urutan tertentu, sedangkan map adalah struktur data yang mengaitkan setiap kunci dengan nilai yang sesuai. Array menggunakan indeks numerik untuk mengakses elemen, sementara map menggunakan kunci unik untuk mengakses nilai. Ukuran array harus ditentukan pada saat deklarasi dan tidak dapat berubah selama runtime, sedangkan map dapat dinamis dan dapat bertambah atau berkurang saat program berjalan. Selain itu, pencarian di dalam array biasanya dilakukan secara linier, sementara map memiliki pencarian logaritmik yang lebih efisien karena diimplementasikan sebagai pohon pencarian biner.

#### Full code Screenshot:
![Screenshot 2024-03-10 033916](https://github.com/greyL15ZF/ibal/assets/157208590/139c8218-1ba6-45ed-bdf8-0a50941cce6e)


## Kesimpulan
Tipe Data Primitif: Tipe data primitif seperti int dan float adalah dasar dari bahasa pemrograman yang digunakan untuk merepresentasikan nilai dasar seperti bilangan bulat dan desimal. Penggunaan tipe data primitif memungkinkan programmer untuk melakukan operasi matematika sederhana dan manipulasi data dengan efisien. Program-program yang menggunakan tipe data primitif cenderung lebih efisien dalam penggunaan memori dan eksekusi karena overhead yang lebih rendah dibandingkan dengan tipe data yang lebih kompleks atau struktur data yang lebih besar.

Class dan Struct: Class dan struct adalah cara untuk mengorganisasi data dalam bahasa pemrograman C++. Keduanya memungkinkan programmer untuk mengelompokkan data dan metode terkait bersama-sama. Perbedaan utama antara keduanya terletak pada aksesibilitas default dari atribut dan metode, serta penggunaan yang umumnya berbeda sesuai dengan kebutuhan aplikasi.

std::map: Program menggunakan std::map untuk membuat struktur data yang mengaitkan kunci (dalam hal ini, string) dengan nilai (integer). Elemen-elemen ditambahkan ke dalam map menggunakan pasangan kunci-nilai, dan nilai dari sebuah kunci dapat diakses menggunakan operator []. Perbedaan antara array dan map adalah bahwa array adalah kumpulan elemen data yang disimpan dalam urutan tertentu, sedangkan map adalah struktur data yang mengaitkan setiap kunci dengan nilai yang sesuai. Array menggunakan indeks numerik untuk mengakses elemen, sementara map menggunakan kunci unik untuk mengakses nilai. Ukuran array harus ditentukan pada saat deklarasi dan tidak dapat berubah selama runtime, sedangkan map dapat dinamis dan dapat bertambah atau berkurang saat program berjalan. Selain itu, pencarian di dalam array biasanya dilakukan secara linier, sementara map memiliki pencarian logaritmik yang lebih efisien karena diimplementasikan sebagai pohon pencarian biner.

Dengan demikian, pemahaman tentang tipe data primitif, class, struct, dan std::map sangat penting bagi programmer untuk memahami dasar-dasar bahasa pemrograman dan memilih struktur data yang tepat untuk kebutuhan aplikasi mereka.

## Referensi
[1] Brooks, F.P., "The Mythical Man-Month: Essays on Software Engineering", Addison-Wesley, 1995.

[2] Stroustrup, B., "The C++ Programming Language", Addison-Wesley, 2013.

[3] Kernighan, B.W., Ritchie, D.M., "The C Programming Language", Prentice Hall, 1988.