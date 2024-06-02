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