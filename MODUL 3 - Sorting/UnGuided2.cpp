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
