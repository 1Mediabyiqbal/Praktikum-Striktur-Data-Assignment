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
