// Praktikum modul 2-1
// Muhammad Eiros Dante (13222064)

#include <iostream>
using namespace std;

double hitungRataRata(double arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double rerata = sum / size;
    return rerata;
}

int main() {
    int ukuran;
    cout << "Masukkan ukuran array: ";
    cin >> ukuran;

    double arr[ukuran];
    for (int i = 0; i < ukuran; i++) {
        cout << "Masukkan angka: ";
        cin >> arr[i];
    }

    cout << "Rata-rata: " << hitungRataRata(arr, ukuran) << endl;
    return 0;
}