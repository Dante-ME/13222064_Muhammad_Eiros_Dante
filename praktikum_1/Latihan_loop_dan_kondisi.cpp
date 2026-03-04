// Praktikum modul 1
// Muhammad Eiros Dante (13222064)

#include <iostream>
using namespace std;

int main() {
    int angka;
    int jumlah = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan angka: ";
        cin >> angka;

        if (angka > 0) {
            cout << "Angka positif" << endl;
            jumlah += angka;
        }
        else if (angka < 0) {
            cout << "Angka negatif" << endl;
        }
        else {
            cout << "Nol" << endl;
        }
    }

    cout << "Jumlah angka positif: " << jumlah << endl;
        
    return 0;
}
