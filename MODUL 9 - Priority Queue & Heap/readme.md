 <h1 align="center">Laporan Praktikum Modul Priority Queue dan Heaps</h1>
<p align="center">Muhammad Iqbal (NIM : 2311110014)</p>

## Dasar Teori
### Priority Queue
<p align="justify"> Priority Queue adalah struktur data yang sangat penting dalam ilmu komputer dan banyak digunakan dalam berbagai aplikasi. Berbeda dengan antrian biasa yang mengikuti prinsip FIFO (First In, First Out), priority queue mengatur elemen berdasarkan prioritasnya, sehingga elemen dengan prioritas tertinggi akan diakses atau diproses terlebih dahulu. Setiap elemen dalam priority queue memiliki prioritas yang menentukan urutan pengeluarannya dari antrian. Elemen dengan prioritas tertinggi akan diakses lebih dulu, dan jika ada elemen dengan prioritas yang sama, mereka biasanya diakses sesuai urutan kedatangan. 

<p align="justify"> Saat elemen ditambahkan ke dalam antrian, posisinya ditentukan oleh nilai prioritasnya. Misalnya, elemen dengan prioritas tinggi akan ditempatkan dekat bagian depan antrian, sementara elemen dengan prioritas rendah akan ditempatkan dekat bagian belakang. Ada beberapa cara untuk mengimplementasikan priority queue, termasuk menggunakan array, linked list, heap, dan binary search tree. Salah satu cara yang paling efisien untuk mengimplementasikan priority queue adalah dengan menggunakan Heap. Heap adalah pohon biner yang mematuhi properti tertentu yang memungkinkan operasi priority queue dilakukan dengan efisiensi tinggi.



<p align="justify">Priority Queue banyak digunakan dalam berbagai algoritma untuk memecahkan berbagai masalah. Beberapa penggunaan Priority Queue dalam algoritma antara lain:

- Algoritma Dijkstra: Digunakan untuk menemukan jalur terpendek dalam graf berbobot positif. Priority Queue memfasilitasi pemilihan simpul berikutnya dengan bobot terkecil selama proses pencarian jalur terpendek.

- Algoritma A* (A-Star): Sering digunakan dalam masalah pencarian jarak terpendek dengan heuristik. Priority Queue membantu memilih simpul berikutnya berdasarkan nilai fungsi heuristik dan jarak yang sudah ditempuh.

- Algoritma Huffman: Digunakan dalam kompresi data, di mana elemen-elemen dengan frekuensi kemunculan lebih tinggi diberi prioritas lebih tinggi dalam pembuatan pohon Huffman.

- Penjadwalan Tugas: Priority Queue membantu menentukan urutan penjadwalan tugas berdasarkan prioritas yang telah ditentukan.


### Heap
<p align="justify">Heap adalah struktur data berbasis pohon yang digunakan untuk mengimplementasikan priority queue. Heap menjamin bahwa elemen dengan prioritas tertinggi atau terendah selalu berada di posisi root (akar) pohon. Ada dua jenis heap yang umum digunakan:

- Max-Heap

    <p align="justify">Min-Heap adalah struktur data di mana setiap node memiliki nilai yang lebih kecil atau sama dengan nilai anak-anaknya. Hal ini memastikan bahwa elemen dengan nilai terkecil selalu berada di akar pohon, sehingga min-heap sangat efisien untuk operasi yang memerlukan pengambilan elemen terkecil dengan cepat. Min-Heap biasanya diimplementasikan sebagai pohon biner lengkap, yang berarti semua level pohon terisi penuh kecuali mungkin level terakhir, yang terisi dari kiri ke kanan tanpa ada celah. Operasi utama pada min-heap meliputi insert (penambahan elemen baru), extract-min (penghapusan dan pengembalian elemen terkecil), dan get-min (pengembalian elemen terkecil tanpa menghapusnya). Dalam operasi insert, elemen baru ditempatkan di akhir array dan kemudian dipindahkan ke posisi yang sesuai melalui proses yang disebut "shift up" untuk mempertahankan properti heap. Sebaliknya, operasi extract-min menggantikan elemen akar dengan elemen terakhir dalam array, mengurangi ukuran heap, dan kemudian memindahkan elemen baru di akar ke posisi yang sesuai menggunakan "shift down".

- Min-Heap
    
    <p align="justify">Max-Heap adalah kebalikan dari min-heap, di mana nilai setiap node lebih besar atau sama dengan nilai anak-anaknya. Dalam max-heap, elemen dengan nilai terbesar selalu berada di akar pohon, sehingga sangat ideal untuk aplikasi yang memerlukan akses cepat ke elemen terbesar. Sama seperti min-heap, max-heap juga diimplementasikan sebagai pohon biner lengkap. Operasi pada max-heap serupa dengan yang ada pada min-heap, termasuk insert (penambahan elemen baru), extract-max (penghapusan dan pengembalian elemen terbesar), dan get-max (pengembalian elemen terbesar tanpa menghapusnya). Dalam operasi insert, elemen baru ditempatkan di akhir array dan kemudian dipindahkan ke atas melalui proses "shift up" sampai properti max-heap terpenuhi. Operasi extract-max menggantikan elemen akar dengan elemen terakhir, mengurangi ukuran heap, dan kemudian menggunakan "shift down" untuk memastikan elemen baru di akar berada di posisi yang sesuai dengan properti heap.

#### Karakteristik Heap
- Pohon Biner Lengkap (Complete Binary Tree) : Heap selalu berbentuk pohon biner lengkap, yaitu semua level terisi penuh kecuali mungkin level terakhir, yang diisi dari kiri ke kanan tanpa ada celah.

- Heap Property : Setiap node memiliki nilai yang lebih besar atau lebih kecil dari anak-anaknya, tergantung apakah itu max-heap atau min-heap.

#### Kelebihan Heap

- Kompleksitas waktu pada struktur data heap cenderung lebih rendah. Untuk operasi insert atau delete pada heap, kompleksitas waktunya hanya O(log N).
- Heap sangat berguna untuk menemukan elemen dengan nilai minimum atau maksimum.
- Untuk operasi peek, yang mengakses elemen paling atas, kompleksitas waktunya konstan yaitu O(1).
- Heap dapat diimplementasikan menggunakan array, sehingga tidak memerlukan ruang tambahan untuk pointer.
- Binary heap adalah pohon biner yang seimbang dan mudah diimplementasikan.
- Heap dapat dibangun dalam waktu O(N).

#### Kekurangan Struktur Data Heap

- Kompleksitas waktu untuk mencari elemen di Heap adalah O(N).
- Untuk menemukan penerus atau pendahulu suatu elemen, heap memerlukan waktu O(N), sementara BST hanya memerlukan waktu O(log N).
- Untuk mencetak semua elemen heap dalam urutan, kompleksitas waktunya adalah O(N*log N), sedangkan untuk BST, hanya memerlukan waktu O(N).
- Manajemen memori lebih kompleks dalam heap memori karena digunakan secara global. Memori heap dibagi menjadi dua bagian - generasi lama dan generasi muda, seperti yang dilakukan pada garbage collection di Java.

## Guided 1

```C++
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return (2 * i) + 1;
}

int rightChild(int i) {
    return (2 * i) + 2;
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    insert(45);
    insert(20);
    insert(14);
    insert(12);
    insert(31);
    insert(7);
    insert(11);
    insert(13);
    insert(7);

    std::cout << "Priority Queue: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Node with maximum priority: " << extractMax() << "\n";

    std::cout << "Priority queue after extracting maximum: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    changePriority(2, 49);
    std::cout << "Priority queue after priority change: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    remove(3);
    std::cout << "Priority queue after removing the element: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
```
### Output 
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/1a5a7060-78bb-412c-9af2-139c2dfbcebd)

<p align="justify"> Kode tersebut adalah implementasi dari priority queue menggunakan struktur data heap, dalam hal ini menggunakan max-heap. Dalam kode ini, terdapat empat fungsi utama yang mengelola operasi pada priority queue yang diimplementasikan menggunakan max-heap.

<p align="justify"> Pertama, fungsi insert(p) digunakan untuk menambahkan elemen baru ke dalam priority queue. Setelah elemen baru ditambahkan, fungsi shiftUp dipanggil untuk memastikan elemen yang baru dimasukkan tetap mematuhi properti max-heap. Kedua, fungsi extractMax() digunakan untuk menghapus dan mengembalikan elemen dengan nilai maksimum dari priority queue, yaitu elemen di akar heap. Proses penghapusan ini juga mempertahankan properti max-heap dengan memanggil fungsi shiftDown.

<p align="justify"> Selanjutnya, fungsi changePriority(i, p) digunakan untuk mengubah nilai elemen pada indeks tertentu menjadi nilai baru p. Properti max-heap dijaga dengan memanggil fungsi shiftUp jika nilai baru lebih besar dari nilai lama, atau shiftDown jika nilai baru lebih kecil dari nilai lama. Terakhir, fungsi remove(i) menghapus elemen pada indeks i dari priority queue. Proses ini dimulai dengan meningkatkan nilai elemen tersebut menjadi nilai maksimum yang mungkin, kemudian memanggil fungsi shiftUp untuk mempertahankan properti max-heap, dan akhirnya mengekstrak nilai maksimum menggunakan extractMax.

<p align="justify"> Setelah operasi penambahan, Priority Queue akan menampilkan semua elemen dalam priority queue, menunjukkan struktur heap setelah semua elemen dimasukkan. Node with maximum priority akan menampilkan nilai maksimum (elemen di akar heap) yang dihapus dari priority queue. Priority queue after extracting maximum akan menunjukkan keadaan priority queue setelah operasi ekstraksi elemen maksimum dilakukan. Priority queue after priority change akan menunjukkan priority queue setelah nilai prioritas elemen ke-2 diubah menjadi 49. Terakhir, Priority queue after removing the element akan menampilkan priority queue setelah elemen pada indeks ke-3 dihapus.

## Unguided 

<p align="justify"> 1. Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user.


```C++
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return (2 * i) + 1;
}

int rightChild(int i) {
    return (2 * i) + 2;
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

void buildHeap() {
    int elements[] = {45, 20, 14, 12, 31, 7, 11, 13, 7};
    int n = sizeof(elements) / sizeof(elements[0]);

    for (int i = 0; i < n; ++i) {
        insert(elements[i]);
    }
}

void printHeap() {
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    buildHeap();

    std::cout << "Priority Queue: ";
    printHeap();

    std::cout << "Node with maximum priority: " << extractMax() << "\n";

    std::cout << "Priority queue after extracting maximum: ";
    printHeap();

    changePriority(2, 49);
    std::cout << "Priority queue after priority change: ";
    printHeap();

    remove(3);
    std::cout << "Priority queue after removing the element: ";
    printHeap();

    return 0;
}

```
### Output
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/477165b4-21cf-4c0c-904e-e286b5f85205)


<p align="justify">Kode di atas merupakan implementasi dari struktur data priority queue menggunakan max-heap dalam bahasa pemrograman C++. Max-heap adalah bentuk khusus dari binary heap di mana setiap node (elemen) memiliki nilai yang lebih besar atau sama dengan nilai dari kedua anaknya. Pada implementasi ini, terdapat beberapa fungsi yang penting untuk mengelola priority queue, seperti insert, extractMax, changePriority, dan remove. Fungsi insert digunakan untuk menambahkan elemen baru ke dalam priority queue dan memastikan bahwa struktur heap tetap terjaga dengan cara memindahkan elemen baru ke posisi yang benar dengan memanggil fungsi shiftUp. Fungsi extractMax digunakan untuk menghapus dan mengembalikan elemen dengan nilai maksimum (elemen akar) dari priority queue, sementara changePriority digunakan untuk mengubah nilai prioritas suatu elemen pada indeks tertentu. Terakhir, fungsi remove menghapus elemen pada indeks yang ditentukan dengan cara menggantikan nilainya dengan nilai maksimum yang mungkin, kemudian mempertahankan struktur heap dengan memanggil shiftUp dan mengeluarkan elemen maksimum menggunakan extractMax. Dengan demikian, implementasi ini memungkinkan pengguna untuk mengelola priority queue dengan berbagai operasi yang dapat dilakukan secara efisien menggunakan struktur data max-heap.


## Kesimpulan
<p align="justify"> Priority queue adalah struktur data di mana elemen-elemen diakses berdasarkan prioritas mereka, bukan urutan waktu. Elemen dengan prioritas lebih tinggi diakses terlebih dahulu. Priority queue dapat diimplementasikan menggunakan array, linked list, atau heap. Heap adalah struktur data pohon yang memenuhi properti heap, di mana setiap simpul memiliki nilai yang lebih besar (atau lebih kecil) dari semua simpul di bawahnya. Heap dapat berupa max heap, di mana elemen terbesar berada di akar, atau min heap, di mana elemen terkecil berada di akar. Operasi dasar pada heap meliputi penyisipan (insert), ekstraksi nilai maksimum (atau minimum), perubahan prioritas, dan penghapusan elemen. Implementasi heap menggunakan array memastikan posisi elemen-elemen dalam array mengikuti aturan khusus untuk menjaga properti heap. Priority queue sangat penting dalam pemrosesan data dengan prioritas, dan heap memfasilitasi operasi-operasi penting ini dengan efisien.


## Referensi

[1] Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. (2009). Introduction to Algorithms (3rd ed.). MIT Press.

[2] Sedgewick, R., & Wayne, K. (2011). Algorithms (4th ed.). Addison-Wesley.