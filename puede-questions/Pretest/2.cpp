//randomizer

//tdk bisa bekerja :( waktu 3 jam hbs

#include <iostream>
#include <cstdlib>
using namespace std;

void randomNum(int batas) {
    //setup randomizer
    srand((unsigned) time(NULL));

    int angka[batas];
    int container;
    int i;
    int n;
    bool check = true;
    
    for (i = 0; i < batas; i++) {
        
        while (check) {
            container = 1 + (rand() % 20);

            for (n = 0; n < i; n++) {
                if (container =! angka[n]) {
                    check = false;
                }
            }
        }
        
        angka[i] = container;
        check = true;

        }
    
    for (i = 0; i < batas; i++) {
        cout << angka[i] << " ";
    }

    }

int main() {
    int bts;
    cout << "Pilih angka batas: ";
    cin >> bts;
    randomNum(bts);
    return 0;
}

