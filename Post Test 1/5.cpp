#include <iostream>
using namespace std;

#include <iostream>

struct Node {
    int data;
    Node* next;
};

class SingleLinkedList {
private:
    Node* head;

public:
    SingleLinkedList() : head(nullptr) {}

    void addToEnd(int value) {
        Node* newNode = new Node{value, nullptr};
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void printList() const {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    void deleteFirst() {
        if (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            std::cout << "List is empty, nothing to delete." << std::endl;
        }
    }

    // Destructor untuk membersihkan memory
    ~SingleLinkedList() {
        while (head != nullptr) {
            deleteFirst();
        }
    }
};

int main() {
    SingleLinkedList list;

    list.addToEnd(10);
    list.addToEnd(20);
    list.addToEnd(30);

    std::cout << "List elements: ";
    list.printList();

    list.deleteFirst();
    std::cout << "After deleting first element: ";
    list.printList();

    return 0;
}
