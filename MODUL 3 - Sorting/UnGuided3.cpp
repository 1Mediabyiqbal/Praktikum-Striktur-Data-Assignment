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
