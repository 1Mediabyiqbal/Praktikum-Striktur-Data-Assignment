 <h1 align="center">Laporan Praktikum Modul Queue</h1>
<p align="center">Muhammad Iqbal (NIM 2311110013)</p>

## Dasar Teori
<p align="justify"> Antrian (queue) merupakan struktur data yang mengikuti prinsip "First-In-First-Out" (FIFO), di mana elemen yang pertama dimasukkan ke dalam antrian akan menjadi yang pertama keluar. Dalam antrian, terdapat dua operasi utama: enqueue (penambahan elemen) dan dequeue (penghapusan elemen). Enqueue menambahkan elemen baru ke ujung belakang antrian, sedangkan dequeue menghapus elemen di ujung depan antrian.

Operasi dasar pada antrian meliputi:
- Enqueue: menambahkan elemen baru ke dalam antrian di ujung belakang.
- Dequeue: menghapus dan mengembalikan elemen di ujung depan antrian.
- Front: mendapatkan elemen di ujung depan antrian tanpa menghapusnya.
- IsEmpty: memeriksa apakah antrian kosong.
- IsFull: memeriksa apakah antrian penuh (biasanya relevan pada implementasi berbasis array).
- Size: mendapatkan jumlah elemen yang ada di dalam antrian.

Implementasi operasi enqueue, dequeue, front, dan isEmpty biasanya memiliki kompleksitas waktu konstan (O(1)), kecuali untuk operasi size yang bisa menjadi O(n) tergantung pada implementasinya. Implementasi antrian berbasis linked list sering digunakan karena memungkinkan penambahan dan penghapusan elemen dengan kompleksitas waktu konstan.

Implementasi antrian dapat dilakukan menggunakan berbagai struktur data, seperti array atau linked list, tergantung pada kebutuhan dan karakteristik aplikasi yang akan menggunakannya. Antrian umumnya digunakan dalam berbagai konteks, seperti pengelolaan tugas dalam sistem komputer, pengelolaan pesan dalam protokol komunikasi, dan pengelolaan antrian pelanggan dalam layanan pelayanan. Dalam sistem komputer, antrian digunakan untuk mengelola tugas-tugas yang harus dieksekusi oleh sistem. Misalnya, dalam sistem operasi, antrian digunakan untuk mengatur antrian proses yang menunggu untuk dieksekusi oleh CPU. Setiap kali sebuah proses dibuat atau berakhir, operasi enqueue dan dequeue dilakukan pada antrian proses [3].Dengan demikian, implementasi antrian dalam berbagai struktur data tidak hanya memberikan fleksibilitas dalam penggunaan, tetapi juga memungkinkan pengembangan aplikasi yang efisien.

Berikut adalah beberapa keunggulan dan kelemahan dari struktur data antrian (queue):

Keunggulan antrian meliputi pengaturan yang terstruktur, implementasi yang fleksibel, dan penghapusan elemen yang efisien. Antrian menyediakan pengaturan yang terstruktur dengan prinsip FIFO, memastikan elemen diakses dan dihapus sesuai urutan masuknya. Ini memungkinkan pengolahan data yang adil dan terstruktur. Selain itu, antrian dapat diimplementasikan dengan berbagai cara, seperti menggunakan array, linked list, atau struktur data lainnya, sesuai dengan kebutuhan aplikasi.

Operasi dequeue pada antrian umumnya dapat dilakukan dengan kompleksitas waktu konstan (O(1)), membuat penghapusan elemen menjadi efisien, terutama dalam aplikasi yang membutuhkan respons cepat.

Namun, antrian juga memiliki kelemahan, antara lain keterbatasan akses karena sifat FIFO-nya. Hanya elemen yang berada di depan antrian yang dapat diakses dan dihapus, sehingga akses ke elemen di posisi tertentu dalam antrian tidak efisien. Selain itu, kinerja operasi enqueue dan dequeue dapat dipengaruhi oleh ukuran antrian. Pada implementasi antrian menggunakan array dengan ukuran tetap, operasi enqueue mungkin menjadi lambat jika antrian hampir penuh dan perlu dilakukan realokasi memori.
## Guided 1

### Full code screenshoot
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/84cffff2-895a-4a53-bf46-d1515d0a59f7)

```C++
#include <iostream>
#include <string>
using namespace std;

const int maksimalQueue = 5; // Maksimal Antrian
int front = 0; // Penanda Depan Antrian
int back = 0; // Penanda Belakang Antrian
string queueTeller[5]; // Deklarasi Antrian Teller

bool isFull() { // Pengecekan Antrian Sudah Penuh Atau Tidak
    if (back == maksimalQueue) {
        return true; // = 1
    } else {
        return false;
    }
}


bool isEmpty() { // Pengecekan Antrian Sudah Kosong Atau Tidak
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { // Fungsi Menambahkan Antrian
    if (isFull()) {
        cout << "Antrian Sudah Penuh" << endl;
    } else {
        if (isEmpty()) {
            queueTeller[0] = data;
            front++;
            back++;
        } else {
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Fungsi Mengurangi Antrian
    if (isEmpty()) {
        cout << "Antrian Kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() { // Fungsi Menghitung Banyak Antrian
    return back;
}

void clearQueue() { // Fungsi Menghapus Antrian
    if (isEmpty()) {
        cout << "Antrian Kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        front = 0;
        back = 0;
    }
}

void viewQueue() { // Fungsi Melihat Antrian
    cout << "Data Antrian Teller :" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (Kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    
    viewQueue();
    cout << "Jumlah Antrian = " << countQueue() << endl;
    
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah Antrian = " << countQueue() << endl;
    
    clearQueue();
    viewQueue();
    cout << "Jumlah Antrian = " << countQueue() << endl;
    
    return 0;
}
```
### Output 
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/23248cc0-ebb5-490f-b7a2-0e0809227d35)

<p align="justify"> Pada bagian awal, kode mendeklarasikan variabel-variabel yang diperlukan, seperti maksimalQueue untuk menentukan batas maksimal antrian, front dan back untuk menandai posisi depan dan belakang antrian, serta array queueTeller sebagai wadah untuk menyimpan elemen-elemen antrian. Fungsi-fungsi yang didefinisikan dalam kode meliputi; isFull(), untuk memeriksa apakah antrian sudah penuh atau tidak. Jika back sudah mencapai batas maksimal antrian, maka antrian dianggap penuh. isEmpty(), untuk memeriksa apakah antrian kosong atau tidak. Jika back bernilai 0, maka antrian dianggap kosong. enqueueAntrian(string data), untuk menambahkan elemen baru ke dalam antrian. Jika antrian penuh, akan menampilkan pesan "Antrian Sudah Penuh". Jika antrian kosong, elemen baru akan ditempatkan di indeks 0. Jika tidak kosong, elemen baru akan ditempatkan di indeks back. dequeueAntrian(), untuk menghapus elemen dari depan antrian. Jika antrian kosong, akan menampilkan pesan "Antrian Kosong". Jika tidak kosong, elemen-elemen akan digeser ke depan untuk menghapus elemen pertama. countQueue(), untuk menghitung jumlah elemen yang ada dalam antrian. clearQueue(), untuk menghapus semua elemen dalam antrian dengan mengosongkan array dan mengatur front dan back kembali ke 0. viewQueue(), untuk menampilkan elemen-elemen dalam antrian beserta posisi mereka. Pada awalnya, dua elemen, "Andi" dan "Maya", dimasukkan ke dalam antrian. Setelah itu, fungsi viewQueue() dipanggil untuk menampilkan isi antrian. Dua nama tersebut ditampilkan dengan nomor posisi dalam antrian (dalam hal ini, nomor urutan 1 dan 2), diikuti dengan pesan "Jumlah Antrian = 2" yang menunjukkan bahwa ada dua elemen dalam antrian. Kemudian, dilakukan operasi dequeue untuk menghapus elemen pertama dari antrian, yaitu "Andi". Setelah itu, fungsi viewQueue() dipanggil kembali untuk menampilkan isi antrian yang tersisa. Hanya satu elemen yang tersisa dalam antrian, yaitu "Maya", ditampilkan dengan nomor posisi 1, dan pesan "Jumlah Antrian = 1" menunjukkan bahwa hanya ada satu elemen dalam antrian. Selanjutnya, dilakukan operasi clearQueue() untuk mengosongkan seluruh antrian. Karena antrian sudah kosong, maka pesan "Antrian Kosong" ditampilkan. Setelah itu, fungsi viewQueue() dipanggil kembali, yang akan menampilkan pesan "Antrian Kosong" lagi. Selain itu, pesan "Jumlah Antrian = 0" menunjukkan bahwa tidak ada elemen yang tersisa dalam antrian.

## Unguided 

### <p align="justify"> 1. Ubahlah penerapan konsep queue pada bagian guided dari array menjadi linked list

### Full code screenshoot
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/680f8ff7-b40f-4c2e-98dd-de1ba935a014)


```C++
#include <iostream>
#include <string>
using namespace std;

// Struktur data untuk simpul dalam linked list antrian
struct Node {
    string data;
    Node* next;
};

class Queue {
private:
    Node* front; // antrian depan
    Node* rear; // antrian belakang
public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Menambahkan elemen ke antrian
    void enqueue(const string& data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Menghapus elemen dari antrian
    void dequeue() {
        if (!isEmpty()) {
            Node* temp = front;
            front = front->next;
            delete temp;
            if (front == nullptr) {
                rear = nullptr;
            }
        } else {
            cout << "Antrian kosong" << endl;
        }
    }

    // Memeriksa apakah antrian kosong
    bool isEmpty() {
        return front == nullptr;
    }

    // Menampilkan elemen-elemen dalam antrian
    void displayQueue() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
        } else {
            Node* temp = front;
            cout << "Data Antrian Teller :" << endl;
            while (temp != nullptr) {
                cout << temp->data << endl;
                temp = temp->next;
            }
        }
    }

    // Menghitung jumlah elemen dalam antrian
    int countQueue() {
        int count = 0;
        Node* temp = front;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    // Menghapus semua elemen dalam antrian
    void clearQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue queueTeller;

    queueTeller.enqueue("Andi");
    queueTeller.enqueue("Maya");

    queueTeller.displayQueue();
    cout << "Jumlah Antrian = " << queueTeller.countQueue() << endl;

    queueTeller.dequeue();
    queueTeller.displayQueue();
    cout << "Jumlah Antrian = " << queueTeller.countQueue() << endl;

    queueTeller.clearQueue();
    queueTeller.displayQueue();
    cout << "Jumlah Antrian = " << queueTeller.countQueue() << endl;

    return 0;
}
```
### Output
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/a7e1312e-65a8-4907-bea9-311dff9ef92c)

<p align="justify">Implementasi antrian (queue) menggunakan linked list dalam kode tersebut melibatkan struktur data Node yang mewakili setiap elemen dalam antrian. Setiap Node memiliki dua bagian: data (informasi dari elemen) dan next (pointer ke Node berikutnya). Kelas Queue memiliki dua pointer, front (elemen depan antrian) dan rear (elemen belakang antrian). Fungsi enqueue(const string& data) digunakan untuk menambahkan elemen baru ke belakang antrian dengan membuat Node baru dan menambahkannya ke rear. Fungsi dequeue() menghapus elemen dari depan antrian dengan menghapus Node pertama dan menggeser front ke Node berikutnya. Fungsi isEmpty() memeriksa apakah antrian kosong dengan memeriksa apakah front bernilai nullptr. Fungsi displayQueue() menampilkan semua elemen dalam antrian dengan menelusuri linked list dari front hingga rear. Fungsi countQueue() menghitung jumlah elemen dalam antrian dengan menghitung jumlah Node dalam linked list. Fungsi clearQueue() menghapus semua elemen dari antrian dengan terus melakukan operasi dequeue hingga antrian kosong.

Dalam fungsi main, objek queueTeller dari kelas Queue dibuat. Elemen-elemen ditambahkan ke antrian menggunakan fungsi enqueue(). Antrian ditampilkan dan jumlah elemen dalam antrian ditampilkan. Kemudian, elemen pertama dari antrian dihapus dan operasi yang sama dilakukan untuk menampilkan antrian dan jumlah elemen dalam antrian. Terakhir, semua elemen dalam antrian dihapus dan ditampilkan status antrian kosong.
Output yang dihasilkan menunjukkan proses penambahan, penghapusan, dan pengelolaan elemen dalam antrian menggunakan linked list.

### <p align="justify">2. Dari nomor 1 buatlah konsep antri dengan atribut Nama mahasiswa dan NIM Mahasiswa

### Full code screenshoot
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/e0fd9edf-9ef6-4fce-90d7-b5b26722d2df)

```C++
#include <iostream>
#include <string>
using namespace std;

// Struktur data untuk simpul dalam linked list antrian
struct Node {
    string nama;
    string nim;
    Node* next;
};

class Queue {
private:
    Node* front; // antrian depan
    Node* rear; // antrian belakang
public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Menambahkan mahasiswa ke antrian
    void enqueue(const string& nama, const string& nim) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Menghapus mahasiswa dari antrian
    void dequeue() {
        if (!isEmpty()) {
            Node* temp = front;
            front = front->next;
            delete temp;
            if (front == nullptr) {
                rear = nullptr;
            }
        } else {
            cout << "Antrian kosong" << endl;
        }
    }

    // Memeriksa apakah antrian kosong
    bool isEmpty() {
        return front == nullptr;
    }

    // Menampilkan mahasiswa-mahasiswa dalam antrian
    void displayQueue() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
        } else {
            Node* temp = front;
            cout << "Data Antrian Mahasiswa:" << endl;
            while (temp != nullptr) {
                cout << "Nama: " << temp->nama << ", NIM: " << temp->nim << endl;
                temp = temp->next;
            }
        }
    }

    // Menghitung jumlah mahasiswa dalam antrian
    int countQueue() {
        int count = 0;
        Node* temp = front;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    // Menghapus semua mahasiswa dalam antrian
    void clearQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue queueMahasiswa;

    queueMahasiswa.enqueue("Andi", "2411110011");
    queueMahasiswa.enqueue("Maya", "2411110012");

    queueMahasiswa.displayQueue();
    cout << "Jumlah Mahasiswa dalam Antrian = " << queueMahasiswa.countQueue() << endl;

    queueMahasiswa.dequeue();
    queueMahasiswa.displayQueue();
    cout << "Jumlah Mahasiswa dalam Antrian = " << queueMahasiswa.countQueue() << endl;

    queueMahasiswa.clearQueue();
    queueMahasiswa.displayQueue();
    cout << "Jumlah Mahasiswa dalam Antrian = " << queueMahasiswa.countQueue() << endl;

    return 0;
}
```
### Output
![image](https://github.com/greyL15ZF/Praktikum-Striktur-Data-Assignment/assets/157208590/2c73a307-c21e-4134-9bbe-39857e2ac891)


<p align="justify">Implementasi antrian (queue) menggunakan linked list dalam kode tersebut melibatkan struktur data Node yang mewakili setiap elemen dalam antrian. Setiap Node memiliki atribut untuk menyimpan nama dan NIM mahasiswa, serta pointer next yang menunjukkan Node berikutnya dalam linked list. Kelas Queue memiliki pointer front (elemen depan antrian) dan rear (elemen belakang antrian).

Fungsi enqueue(const string& nama, const string& nim) digunakan untuk menambahkan mahasiswa baru ke belakang antrian dengan membuat Node baru untuk mahasiswa tersebut dan menambahkannya ke rear. Fungsi dequeue() menghapus mahasiswa dari depan antrian dengan menghapus Node pertama dan menggeser front ke Node berikutnya. Fungsi isEmpty() memeriksa apakah antrian kosong dengan memeriksa apakah front bernilai nullptr. Fungsi displayQueue() menampilkan seluruh mahasiswa dalam antrian dengan menelusuri linked list dari front hingga rear. Fungsi countQueue() menghitung jumlah mahasiswa dalam antrian dengan menghitung jumlah Node dalam linked list. Fungsi clearQueue() menghapus semua mahasiswa dari antrian dengan terus melakukan operasi dequeue hingga antrian kosong.

Dalam fungsi main(), objek queueMahasiswa dari kelas Queue dibuat, dan dua mahasiswa (Andi dan Maya) ditambahkan ke dalam antrian menggunakan fungsi enqueue(). Selanjutnya, mahasiswa pertama (Andi) dihapus dari antrian menggunakan dequeue(). Kemudian, semua mahasiswa dihapus dari antrian menggunakan clearQueue(). Setiap tahap eksekusi yang dilakukan, data mahasiswa dalam antrian beserta jumlah mahasiswa dalam antrian ditampilkan.

## Kesimpulan
<p align="justify">Antrian (queue) adalah struktur data yang memungkinkan penambahan elemen baru hanya di satu ujung (rear) dan penghapusan elemen dilakukan di ujung lain (front). Prinsip kerja antrian mengikuti konsep "First-In-First-Out" (FIFO), di mana elemen yang pertama kali masuk ke dalam antrian akan menjadi yang pertama keluar. Antrian dapat diimplementasikan menggunakan berbagai struktur data dasar, seperti array atau linked list, tergantung pada kebutuhan aplikasi dan kompleksitasnya. Implementasi menggunakan linked list umumnya lebih fleksibel dan efisien dalam menangani operasi enqueue dan dequeue, terutama saat ukuran antrian tidak pasti. Antrian menyediakan mekanisme yang efisien untuk mengatur dan mengelola data dalam urutan tertentu. Antrian memastikan bahwa elemen-elemen diproses sesuai urutan kedatangan mereka, yang penting dalam skenario seperti antrian panggilan atau pengolahan tugas. Dengan demikian, antrian adalah konsep yang sangat relevan dan berperan penting dalam berbagai aspek pemrograman, sistem terdistribusi, dan pengolahan data modern. Memahami prinsip-prinsip dan aplikasi antrian akan membantu dalam pengembangan solusi yang efisien dan skalabel untuk berbagai tantangan dalam dunia teknologi informasi.


## Referensi

[1] "Introduction to Algorithms" oleh Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, dan Clifford Stein
