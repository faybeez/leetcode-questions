#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int bil, bilangan[4], i;
    string x[9] = {"se", "dua ", "tiga ", "empat ", "lima ", "enam ", "tujuh ", "delapan ", "sembilan "};
    string bilang[4] = {"ribu ", "ratus ", "puluh ", " "};

    cout << "Bilangan: ";
    cin >> bil;

    bilangan[0] = bil / 1000;
    bilangan[1] = bil % 1000 / 100;
    bilangan[2] = bil % 100 / 10;
    bilangan[3] = bil % 10;

    cout << "Ribuan: " << bilangan[0];
    cout << "\nRatusan: " << bilangan[1];
    cout << "\nPuluhan: " << bilangan[2];
    cout << "\nSatuan: " << bilangan[3];

    cout << "\nTerbilang: ";

    for (i = 0; i < 4; i++) {
        if (bilangan[i] != 0) {
            cout << x[bilangan[i]-1] << bilang[i];
        }
    }
}