#include <stdio.h>
#include <iostream>
#include <string>
#include <random>
#include <time.h>

using namespace std;

int main() {
    srand(time(nullptr));
    int i, bil, counter = 1;

    string songList[10] = {
        "Flowers - Miley Cyrus",
        "As it was - Harry Styles", 
        "Delicate - Taylor Swift",
        "Senorita - Shawn Mendes",
        "Girls Like You - Maroon 5",
        "I Don't Care - Ed Sheeran",
        "Vampire - Olivia Rodrigo",
        "Anti-Hero - Taylor Swift", 
        "Wish You The Best - Lewis Capaldi",
        "Karma - Taylor Swift"
        };
    
    bool check[10];
    for (i = 0; i < 10; i++) {
        check[i] = false;
    }

    cout << "Song list: \n";
    for (i = 0; i < 10; i++) {
        cout << i+1 << ". " << songList[i] << "\n";
    }

    cout << "Shuffled song list: \n";
    while (counter <= 10) {
        bil = rand() % 10;
        if (check[bil] == false) {
            check[bil] = true;
            cout << counter << ". " << songList[bil] << "\n";
            counter ++;
        }
    }
}