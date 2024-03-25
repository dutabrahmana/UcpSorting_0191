#include <iostream>
using namespace std;

void selectionSort(int duta[91], int n) {
    for (int j = 0; j < n - 1; ++j) {
        int min_index = j;
        for (int i = j + 1; i < n; ++i) {
            if (duta[i] < duta[min_index]) {
                min_index = i;
            }
        }
        // Swap arr[j] with arr[min_index]
        int temp = duta[j];
        duta[j] = duta[min_index];
        duta[min_index] = temp;
    }
}

int main() {
    int duta[] = { 91 };
    int n = sizeof(duta) / sizeof(duta[0]);

    cout << "Array sebelum sorting: ";
    for (int i = 0; i < n; ++i) {
        cout << duta[i] << " ";
    }
    cout << endl;

    selectionSort(duta, n);

    cout << "Array setelah sorting:0 ";
    for (int i = 0; i < n; ++i) {
        cout << duta[i] << " ";
    }
    cout << endl;

    return 0;
}
