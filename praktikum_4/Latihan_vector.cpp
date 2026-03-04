#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    vector<double> sensor;
    sensor.push_back(100.5);
    sensor.push_back(200.0);
    sensor.push_back(150.5);
    
    for (int i = 0; i < sensor.size(); i++) {
        sensor[i] = sensor[i] * 1.1;
    }
    
    ofstream file("hasil_kalibrasi.txt");

    if (!file.is_open()) {
        cout << "Gagal membuka file!" << endl;
        return 1;
    }

    for (int i = 0; i < sensor.size(); i++) {
        file << sensor[i] << endl;
    }

    file.close();

    cout << "Proses kalibrasi selesai. Data disimpan ke hasil_kalibrasi.txt" << endl;

    return 0;
}