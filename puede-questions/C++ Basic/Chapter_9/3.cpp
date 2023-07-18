#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int bil, bilangan[4], i;
    string x[9] = {"se", "dua ", "tiga ", "empat ", "lima ", "enam ", "tujuh ", "delapan ", "sembilan "};
    string bilang[5] = {"ribu ", "ratus ", "puluh ", " ", "belas"};

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


        for (i = 0; i < 2; i++) {
            if (bilangan[i] != 0) {
                cout << x[bilangan[i]-1] << bilang[i];
            }
        }

        while (true) {
            if (bilangan[2] == 1 && bilangan[3] != 0) {
                cout << x[bilangan[3]-1] << bilang[4];
                break;
            }
            else if (bilangan[2] == 1) {
                cout << "sepuluh";
                break;
            }
            else if (bilangan[2] >= 2) {
                cout << x[bilangan[2]-1] << bilang[1];
            }
            if (bilangan[3] == 1) {
                cout << "satu";
                break;
            }
            else if (bilangan[3] != 0) {
                cout << x[bilangan[3]-1];
                break;
            }
        }
        
    }
    
