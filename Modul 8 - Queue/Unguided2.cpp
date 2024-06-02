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