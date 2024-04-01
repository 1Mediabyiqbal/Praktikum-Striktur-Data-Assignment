<h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Muhammad Iqbal</p>

## Dasar Teori
<p align="justify"> Pengurutan merujuk pada proses pengaturan elemen data ke dalam urutan tertentu, biasanya dari yang terkecil ke yang terbesar atau sebaliknya, sesuai dengan aturan yang telah ditetapkan. Ini merupakan salah satu operasi yang paling umum digunakan dalam komputasi dan memiliki aplikasi yang luas, seperti dalam pencarian, pemrosesan data, analisis data, dan sebagainya. Pengurutan memungkinkan penggunaan algoritma pencarian yang lebih efisien; sebagai contoh, dalam data yang telah diurutkan, pencarian biner dapat digunakan dengan kompleksitas waktu logaritmik, berbeda dengan pencarian linier yang memerlukan kompleksitas waktu linear dalam data yang tidak terurut. Selain efisiensi dalam pencarian, pengurutan juga memberikan kemudahan dalam representasi data kepada pengguna. Dengan menyajikan data sesuai dengan keinginan atau kebutuhan mereka, pengguna dapat dengan mudah menganalisis dan memahami informasi yang terdapat dalam data tersebut. Beberapa metode pengurutan yang umum digunakan mencakup bubble sort, insertion sort, selection sort, merge sort, dan quick sort. Penting juga untuk dicatat bahwa pengurutan memiliki peran yang signifikan dalam pemrosesan data paralel. Banyak penelitian sedang dilakukan untuk mengembangkan algoritma pengurutan yang dapat berjalan secara efisien di lingkungan dengan banyak prosesor atau sumber daya terdistribusi. Hal ini menunjukkan bahwa pengurutan tidak hanya memiliki manfaat saat dijalankan secara serial, tetapi juga penting dalam mengoptimalkan kinerja sistem dalam konteks komputasi paralel dan terdistribusi.

### 1. Bubble Sort

<p align="justify">Bubble Sort adalah algoritma pengurutan yang sangat sederhana dalam dunia pemrograman dan sering digunakan sebagai dasar untuk memahami konsep pengurutan. Algoritma ini bekerja dengan membandingkan pasangan elemen berturut-turut dalam array, dan jika ditemukan bahwa elemen yang lebih kecil berada setelah elemen yang lebih besar, maka posisi keduanya ditukar. Proses ini terus diulang sampai tidak ada lagi pertukaran yang dilakukan, yang menandakan bahwa array sudah sepenuhnya terurut. Namun, meskipun sederhana, Bubble Sort tidak efisien untuk array yang besar. Hal ini disebabkan oleh jumlah pertukaran elemen yang dibutuhkan, terutama jika arraynya tidak hampir terurut. Dengan kompleksitas waktu O(n^2) dalam kasus rata-rata dan terburuk, di mana n adalah jumlah elemen dalam array, Bubble Sort tidak disarankan untuk digunakan dalam situasi di mana waktu eksekusi menjadi kritis. Meskipun demikian, memahami cara kerja Bubble Sort dapat memberikan dasar yang kuat untuk memahami algoritma pengurutan yang lebih kompleks dan efisien. Ini membantu pengembang memahami prinsip-prinsip dasar dari pengurutan data dan menjadi landasan yang baik untuk mempelajari algoritma pengurutan yang lebih canggih dalam pemrograman.

### 2. Selection Sort

<p align="justify">Selection Sort adalah algoritma pengurutan yang mudah dipahami dengan analogi menyusun kartu permainan dari yang terkecil hingga yang terbesar. Prosesnya mirip dengan memilih kartu terkecil dari tumpukan yang belum diurutkan, dan kemudian menukarnya dengan kartu paling depan dari tumpukan tersebut. Langkah ini diulang secara berulang, dimulai dengan memilih kartu terkecil dari tumpukan yang semakin berkurang setiap kali langkahnya, dan menempatkannya di urutan yang sesuai. Proses ini berlanjut sampai semua kartu telah diurutkan.
Meskipun Selection Sort memiliki kompleksitas waktu O(n^2), yang sama dengan Bubble Sort, algoritma ini cenderung lebih cepat dalam praktek karena jumlah pertukaran yang lebih sedikit. Namun demikian, Selection Sort masih tidak efisien untuk array yang besar. Analoginya adalah saat kita harus menyusun kartu permainan dalam jumlah yang sangat besar. Meskipun lebih efisien dalam memilih kartu terkecil, proses tersebut tetap memakan waktu yang signifikan karena harus dilakukan secara satu per satu. Dengan pemahaman tentang cara kerja Selection Sort dan perbandingannya dengan Bubble Sort, kita dapat melihat bahwa meskipun algoritma-algoritma ini memberikan dasar penting dalam pemahaman tentang pengurutan, tetapi untuk kasus yang lebih besar dan kinerja waktu yang kritis, algoritma pengurutan yang lebih canggih perlu dipertimbangkan.

### 3. Insertion Sort

 <p align="justify">Insertion Sort adalah salah satu algoritma pengurutan yang sederhana namun efektif, terutama untuk dataset yang kecil atau sudah hampir terurut. Konsep utamanya adalah menempatkan setiap elemen dari array ke posisi yang tepat dalam array yang sudah diurutkan sebelumnya. Prosesnya dilakukan dengan membandingkan setiap elemen array dengan elemen-elemen sebelumnya dalam array yang sudah diurutkan. Saat elemen tersebut ditempatkan pada posisi yang tepat, algoritma akan menggeser elemen-elemen yang lebih besar untuk memberikan ruang bagi elemen yang baru. Meskipun Insertion Sort memiliki kompleksitas waktu rata-rata O(n^2), di mana n adalah jumlah elemen dalam array, algoritma ini cenderung lebih cepat daripada Bubble Sort atau Selection Sort untuk dataset yang kecil atau sudah hampir terurut. Keunggulan utama Insertion Sort terletak pada kinerja efisiennya dalam menangani dataset yang sudah dekat dengan keadaan terurut. Algoritma ini efektif karena memanfaatkan fakta bahwa dataset yang sudah hampir terurut memerlukan sedikit perubahan untuk diurutkan sepenuhnya, sehingga mempercepat proses pengurutan dalam kasus tersebut.


### 4. Quick Sort

 <p align="justify">Quick Sort adalah algoritma pengurutan yang dikenal karena kecepatan dan efisiensinya. Algoritma ini berfungsi dengan memilih elemen tertentu sebagai pivot, lalu membagi array menjadi dua subarray: satu subarray berisi elemen yang lebih kecil dari pivot, dan yang lainnya berisi elemen yang lebih besar. Proses ini terus diulangi secara rekursif untuk setiap subarray, hingga semua subarray hanya memiliki satu elemen atau tidak ada elemen sama sekali. Kemudian, subarray-subarray tersebut digabungkan kembali untuk membentuk array yang sudah terurut. Pemilihan pivot merupakan tahap penting dalam Quick Sort. Memilih pivot yang tepat dapat meningkatkan kinerja algoritma secara signifikan. Biasanya, pivot dipilih dari tengah array atau secara acak. Namun, jika pivot dipilih dari ujung array dan arraynya hampir terurut, kinerja Quick Sort dapat menjadi buruk, mencapai kompleksitas waktu O(n^2) dalam kasus terburuk. Meskipun begitu, dalam kasus rata-rata, Quick Sort memiliki kompleksitas waktu O(n log n), di mana n adalah jumlah elemen dalam array. Quick Sort juga seringkali lebih cepat daripada Merge Sort dalam implementasi praktis karena memiliki overhead yang lebih rendah. Algoritma ini telah menjadi pilihan yang populer karena kombinasi kecepatan, efisiensi, dan kemampuannya untuk menangani kumpulan data besar dengan baik.
    

### 5. Merge Sort

 <p align="justify">Merge Sort adalah algoritma pengurutan yang stabil dan efisien yang menerapkan teknik divide and conquer. Algoritma ini beroperasi dengan cara membagi array menjadi dua bagian sekitar pertengahan, mengurutkan kedua bagian tersebut secara rekursif, dan kemudian menggabungkan kembali dua bagian yang sudah terurut menjadi satu. Proses penggabungan (merge) adalah tahap penting dalam Merge Sort, di mana elemen-elemen dari dua subarray yang terurut akan digabungkan menjadi satu array yang terurut. Kelebihan utama dari Merge Sort adalah kompleksitas waktu yang stabil pada O(n log n) dalam semua kasus, sehingga membuatnya menjadi pilihan yang lebih diinginkan daripada Quick Sort dalam banyak situasi. Terutama, Merge Sort efektif untuk kumpulan data besar atau hampir terurut. Hal ini berbeda dengan Quick Sort yang rentan terhadap kasus terburuk jika pemilihan pivot tidak optimal atau jika data hampir terurut. Merge Sort menawarkan kinerja yang konsisten dan dapat diandalkan di semua kondisi, menjadikannya salah satu algoritma pengurutan yang populer dan sering digunakan dalam implementasi aplikasi nyata.

## Guided 1
### Bubble Sort
![Screenshot 2024-04-01 185758](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/f8e0e4c0-e563-4ce2-a120-afc3fe5d3f52)


```C++
#include <iostream>
using namespace std;

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j = 0;
    double tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }//end of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort

void print_array(double a[], int length) {

    for(int i = 0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 5;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99.99};

    cout << "Urutan bilangan sebelum sorting : " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutan bilangan setelah sorting : " << endl;
    print_array(a, length);
}
```
### Output 
![Screenshot 2024-04-01 184936](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/89ef7b4e-8aee-4db0-b166-f17c991f0448)

<p align="justify"> Dalam implementasi kode tersebut, fungsi bubble_sort menerima argumen berupa array bilangan desimal (double) dan panjang array. Algoritma bubble sort yang digunakan menggabungkan perulangan while dan for bersarang. Perulangan while bertugas mengulang proses pengurutan hingga tidak ada lagi pertukaran nilai yang diperlukan, sementara perulangan for berperan dalam membandingkan pasangan nilai berurutan dalam array dan melakukan pertukaran jika diperlukan. Dengan proses ini, array berhasil diurutkan dari nilai terkecil (8.2) hingga nilai terbesar (99.99) sesuai dengan prinsip bubble sort, di mana nilai yang lebih besar diposisikan setelah nilai yang lebih kecil. Proses ini diiterasi hingga tidak ada lagi pertukaran yang diperlukan, sehingga array akhirnya terurut dari nilai terkecil hingga terbesar.
Setelah proses pengurutan, fungsi print_array digunakan untuk mencetak nilai-nilai array sebelum dan setelah proses sorting dilakukan. Secara teoritis, kompleksitas waktu kode program tersebut dapat dinotasikan sebagai O(n^2). Ini disebabkan oleh perulangan for yang terdapat di dalam perulangan while. Pada setiap iterasi, perulangan for akan dijalankan sebanyak n kali pada iterasi pertama, n-1 kali pada iterasi kedua, dan seterusnya, hingga mencapai total sekitar n(n-1)/2 iterasi saat n menjadi besar. Hal ini mengakibatkan kompleksitas waktu yang mendekati O(n^2) ketika ukuran array membesar.

## Guided 2
### Insertion Sort
![Screenshot 2024-04-01 202020](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/39ecb876-c5a5-4410-9d81-82b92822e34f)

```C++
#include <iostream>
using namespace std;

void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;

        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }//end of while loop
    }//end of for loop
}

void print_array(char a[], int length) {

    for(int i = 0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {

    int length = 7;
    char a[length] = {'G', 'J', 'F', 'H', 'I', 'B', 'R'};

    cout << "Urutan Karakter Sebelum Sorting : " << endl;
    print_array(a, length);

    insertion_sort(a, length);

    cout << "\nUrutan Karakter Setelah Sorting : " << endl;
    print_array(a, length);
}
```
### Output
![Screenshot 2024-04-01 202135](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/d2a9275c-5956-459c-98e1-b9da4af07e47)


<p align ="justify">Program di atas menggunakan sebuah array karakter dengan panjang 7 yang berisi elemen-elemen karakter yang belum terurut. Melalui fungsi insertion_sort, array tersebut diurutkan menggunakan algoritma insertion sort. Algoritma ini bekerja dengan cara membandingkan setiap elemen dengan elemen-elemen sebelumnya dalam array. Jika ditemukan elemen yang lebih kecil, maka elemen tersebut akan dipindahkan ke posisi yang sesuai dalam array yang terurut. Proses ini diulang hingga seluruh elemen terurut. 
Setelah proses sorting, program mencetak urutan karakter sebelum dan sesudah proses sorting menggunakan fungsi print_array. Output menunjukkan bahwa urutan karakter sebelum sorting adalah "G J F H I B R", sementara urutan karakter setelah sorting adalah "B F G H I J R", yang merupakan urutan karakter yang sudah terurut.
Dalam analisis kompleksitas algoritma insertion sort, Big O dari kode tersebut adalah O(n^2), di mana n adalah jumlah elemen dalam array yang diurutkan. Pada kondisi terburuk, di mana array terurut terbalik, setiap elemen akan dipindahkan ke posisi yang benar dalam array yang terurut. Ini menghasilkan jumlah perbandingan dan pemindahan sekitar n(n-1)/2, yang dapat disederhanakan menjadi sekitar n^2 / 2. Dalam analisis Big O, konstanta seperti 1/2 diabaikan, sehingga kompleksitas waktu dari algoritma insertion sort adalah O(n^2).

## Unguided 

<p align="justify"> 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort! 

![Screenshot 2024-04-01 202830](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/b1877b4a-e4a1-4d4a-8829-db9e49e229e5)

```C++
#include <iostream>
using namespace std;

void selection_sort(double arr[], int length) {
    int i, j, max_idx;
    double tmp;

    for (i = 0; i < length - 1; i++) {
        max_idx = i;
        for (j = i + 1; j < length; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        if (max_idx != i) {
            tmp = arr[i];
            arr[i] = arr[max_idx];
            arr[max_idx] = tmp;
        }
    }
}

void print_array(double a[], int length) {
    for (int i = 0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 5;
    double a[] = {3.8, 2.9, 3.3, 4.0, 2.4};

    cout << "IPS sebelum sorting : " << endl;
    print_array(a, length);

    selection_sort(a, length);

    cout << "\nIPS setelah sorting : " << endl;
    print_array(a, length);

    return 0;
}
```
### Output
![Screenshot 2024-04-01 203045](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/2606e2ff-0b38-423b-8cbb-51239155bf38)

<p align="justify"> Pada kode program di atas, algoritma selection sort bekerja dengan cara mencari nilai terbesar di antara elemen-elemen yang belum terurut, kemudian menukarnya dengan elemen pertama yang belum terurut. Proses ini diulang secara berulang hingga seluruh elemen terurut. Fungsi selection_sort memiliki dua perulangan bersarang: perulangan luar untuk mengontrol iterasi melalui seluruh elemen array, dan perulangan dalam untuk mencari nilai terbesar di antara elemen-elemen yang belum terurut. Saat proses iterasi berlangsung, nilai terbesar akan ditandai dengan variabel min_idx, dan nilai tersebut akan ditukar dengan elemen pertama yang belum terurut jika ditemukan nilai terbesar yang lebih besar dari elemen pertama yang belum terurut.
Pada output di atas, baris pertama menampilkan urutan nilai-nilai array sebelum proses sorting, yaitu 3.8, 2.9, 3.3, 4, 2.4. Sedangkan baris kedua menampilkan urutan nilai-nilai array setelah proses sorting selesai, yaitu 4, 3.8, 3.3, 2.9, 2.4. Jumlah total operasi yang dilakukan dalam algoritma selection sort adalah sekitar n(n-1)/2, yang dalam analisis Big O disederhanakan menjadi O(n^2). Hal ini disebabkan oleh pangkat tertinggi dari n yang menjadi faktor terpenting dalam menentukan kompleksitas waktu algoritma.

<p align="justify">2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo,
dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort! 

![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/58b0af9d-2a66-46e5-987f-d3b99ba960b6)

```C++
#include <iostream>
#include <string>
using namespace std;

void bubble_sort(string names[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

int main() {
    string names[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = sizeof(names) / sizeof(names[0]);

    cout << "Nama-nama sebelum diurutkan:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    cout << endl;

    bubble_sort(names, n);

    cout << "\nNama-nama setelah diurutkan:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}
```
### Output
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/7545efe7-c119-4a33-a691-097a214b9cd0)

<p align="justify">Algoritma Bubble Sort pada kode program di atas bekerja dengan cara membandingkan dua elemen yang berdekatan dalam array, dan melakukan pertukaran jika diperlukan hingga seluruh array terurut. Proses ini menggunakan variabel `not_sorted` sebagai penanda apakah array masih perlu diurutkan atau tidak, yang diinisialisasi dengan nilai true agar perulangan pertama di dalam while loop dapat berjalan.

Di dalam perulangan while, terdapat perulangan for yang digunakan untuk membandingkan nilai elemen array dan melakukan pertukaran jika diperlukan. Jika nilai pada indeks i lebih besar dari nilai pada indeks i + 1, maka dilakukan pertukaran nilai dan variabel `not_sorted` diubah menjadi true untuk menandakan bahwa masih terjadi pertukaran nilai. Pada setiap iterasi, algoritma ini membandingkan pasangan elemen berdekatan dan menukar posisinya jika elemen sebelumnya lebih besar dari elemen berikutnya. Proses ini terus diulang hingga tidak ada lagi pertukaran yang perlu dilakukan, yang menandakan bahwa array sudah terurut.
Output dari program menampilkan urutan nama sebelum dan setelah proses sorting menggunakan algoritma Bubble Sort. Nama-nama telah diurutkan sesuai dengan alfabet dari A ke Z. Kompleksitas waktu dari algoritma Bubble Sort pada kodingan di atas adalah O(n^2), di mana n adalah jumlah elemen dalam array yang akan diurutkan. Perulangan while akan berjalan sebanyak n kali pada iterasi pertama, kemudian n-1 kali pada iterasi kedua, dan seterusnya hingga 1 kali pada iterasi terakhir. Di dalam perulangan while, terdapat perulangan for yang juga akan berjalan sebanyak n-1 kali pada iterasi pertama, n-2 kali pada iterasi kedua, dan seterusnya. Jumlah total operasi perbandingan dan pertukaran nilai dalam algoritma Bubble Sort adalah sekitar n(n-1)/2, yang menghasilkan kompleksitas waktu O(n^2).


<p align="justify">3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun(descending)! 

![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/762bb3f2-6be7-4a35-a0d2-73d9d960ca4b)

![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/69c57dee-e2a3-4025-a8b0-37479a9fa41f)
```C++
#include <iostream>
using namespace std;

void ascending_sort(char *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                char temp=arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void descending_sort(char *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print_array(char arr[], int length){
    for(int i=0; i<length; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah karakter: ";
    cin >> n;

    char arr[n]; // Ini tidak valid di beberapa kompiler C++
    int i;
    for (i=0; i<n ; i++){
        cout << "Masukkan karakter ke-"<< i+1 << ": " ;cin>>arr[i];
    }

    print_array(arr, n);
    cout<< "Urutan karakter sebelum di sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    ascending_sort(arr, n);
    cout << "Urutan karakter setelah ascending sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    descending_sort(arr, n);
    cout << "Urutan karakter setelah descending sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```
### Output 

![Screenshot 2024-04-01 205354](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/e923414c-971e-4c2a-92b5-e49d5abfc848)


<p align="justify"> Kode program di atas mengimplementasikan dua fungsi yang digunakan untuk melakukan pengurutan array karakter (char) secara ascending (menaik) dan descending (menurun). Terdapat juga fungsi untuk mencetak isi array dan fungsi utama (main) yang mengendalikan proses input, pengurutan, dan output. Fungsi ascending_sort menggunakan dua perulangan bersarang (nested loops) untuk membandingkan setiap elemen array dengan elemen-elemen setelahnya. Jika ditemukan elemen yang lebih besar dari elemen yang sedang dibandingkan, maka dilakukan pertukaran nilai. Proses ini diulang sampai seluruh elemen array terurut secara ascending. Fungsi descending_sort memiliki struktur serupa dengan ascending_sort, hanya saja perbandingannya dilakukan untuk mengurutkan array secara descending. Artinya, jika ada elemen yang lebih kecil dari elemen yang sedang dibandingkan, maka dilakukan pertukaran nilai. Kedua fungsi menggunakan nested loops, di mana loop pertama (for loop pertama) mengambil satu elemen array sebagai elemen yang akan dibandingkan dengan elemen-elemen dalam loop kedua (for loop kedua). Pada setiap iterasi loop kedua, dilakukan perbandingan antara elemen yang diproses saat itu dengan elemen selanjutnya. Jika terjadi perbandingan yang sesuai (misalnya, pada ascending sort, nilai elemen saat ini lebih kecil dari nilai elemen selanjutnya), maka terjadi pertukaran nilai antara keduanya. Kode program tersebut memberikan penggunaan interaktif untuk mengurutkan array karakter sesuai dengan preferensi pengguna (ascending atau descending) dan menampilkan hasilnya dalam output konsol. Kompleksitas waktu kodingan tersebut adalah O(n^2) untuk kedua fungsi ascending_sort dan descending_sort, di mana n adalah jumlah elemen dalam array yang diurutkan. Perulangan pertama (for loop pertama) akan berjalan sebanyak n kali, sementara perulangan kedua (for loop kedua) juga akan berjalan sebanyak n kali untuk setiap iterasi dari perulangan pertama. Total operasi yang dilakukan menjadi sekitar n^2, sehingga menghasilkan kompleksitas waktu O(n^2).

## Kesimpulan
<p align="justify"> Proses sorting memiliki peranan penting dalam berbagai bidang, termasuk dalam komputasi, matematika, ekonomi, dan domain lainnya. Tujuan dari proses sorting adalah untuk mengatur elemen-elemen data dalam suatu struktur sehingga membentuk urutan yang sesuai dengan kriteria tertentu, seperti urutan dari yang terkecil ke yang terbesar, berdasarkan abjad, atau kriteria lainnya. Dalam dunia algoritma, ada beragam algoritma sorting yang tersedia, seperti bubble sort, selection sort, dan insertion sort. Masing-masing algoritma memiliki kompleksitas waktu dan ruang yang berbeda, sehingga pemilihan algoritma sorting yang cocok harus mempertimbangkan kebutuhan dan sifat data yang diolah. Misalnya, untuk data yang sederhana dan jumlahnya tidak terlalu besar, algoritma seperti bubble sort atau insertion sort bisa menjadi pilihan karena mudah diimplementasikan. Namun, untuk data yang kompleks dan dalam jumlah besar, algoritma seperti merge sort atau quick sort lebih disarankan karena memiliki kompleksitas waktu yang lebih efisien, yaitu O(n log n).

## Referensi
[1]D. Gupta and R. Singh, "Sorting Algorithms for Time-Series Data Analysis in Internet of Things," Journal of Ambient Intelligence and Humanized Computing, vol. 16, no. 6, pp. 817-830, July 2022.


