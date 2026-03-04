// Muhammad Eiros Dante (13222064)

#include <iostream>
using namespace std;

class RekeningBank {
private:
    double saldo;

public:
    RekeningBank(double SaldoAwal) {
        saldo = SaldoAwal;
    }
    
    void setor(double jumlah) {
        saldo += jumlah;
        cout << "Saldo anda sekarang: " << saldo << endl;
    }
    
    void tarik(double jumlah) {
        if (jumlah > saldo) {
            cout << "Penarikan gagal" << endl;
        }
        else {
            cout << "Saldo anda sebelumnya: " << saldo << endl;
            saldo -= jumlah;
            cout << "Saldo anda sekarang: " << saldo << endl;
        }
    }
};

int main() {
    RekeningBank rekening(10);
    
    rekening.setor(5);
    rekening.tarik(20);
    rekening.tarik(12);
    
    return 0;
}
