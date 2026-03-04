// Praktikum modul 2-2
// Muhammad Eiros Dante (13222064)

#include <iostream>
using namespace std;

void kuadratkan(int *val) {
    *val = (*val) * (*val);
}

int main() {
    int angka = 5;
    cout << "Angka sebelum dikuadratkan: " << angka << endl;

    kuadratkan(&angka);
    cout << "Angka setelah dikuadratkan: " << angka << endl;
    
    return 0;
}