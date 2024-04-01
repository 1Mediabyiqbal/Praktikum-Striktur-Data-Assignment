#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    vector<int> data(n);

    cout << "Masukkan " << n << " bilangan: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    cout << "\nData: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    cout << "\n\nBilangan genap: ";
    for (int i = 0; i < n; i++) {
        if (data[i] % 2 == 0) {
            cout << data[i] << " ";
        }
    }

    cout << "\n\nBilangan ganjil: ";
    for (int i = 0; i < n; i++) {
        if (data[i] % 2 != 0) {
            cout << data[i] << " ";
        }
    }

    return 0;
}