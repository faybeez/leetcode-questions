#include <stdio.h>
#include <random>
#include <time.h>
#include <utility>

using namespace std;

int main() {
    srand(time(nullptr));
    int i, n, x, baris, kolom, rep[2][20], num, totalrep = 0;
    pair <int, int> tempat[20][10];
    bool check;

    for (i = 0; i < 20; i++) {
        rep[0][i] = 0;
        rep[1][i] = 0;
    }

    baris = rand() % 5 + 3;
    kolom = rand() % 5 + 3;

    printf("Baris: %i\nKolom: %i\n\n",baris, kolom);

    for (i = 0; i < baris; i++) {
        for (n = 0; n < kolom; n++) {
            check = false;
            num = rand() % 20 + 1;
            printf("%i  ", num);
            for (x = 0; x < (i) * kolom + n + 1; x++) {
                if (rep[0][x] == num) {
                    rep[1][x]++;

                    tempat[num-1][rep[1][x] - 1].first = i;
                    tempat[num-1][rep[1][x] - 1].second = n;

                    check = true;
                    break;
                }
            }
            if (!check) {
                rep[0][totalrep] = num;
                rep[1][totalrep]++;
                tempat[num-1][0].first = i;
                tempat[num-1][0].second = n;
                totalrep ++;
            }
        }
        printf("\n");
    }
    printf("Kembar: \n");
    i = 0;
    while (true) {
        if (rep[0][i] != 0 && rep[1][i] > 1){
            printf("%i = %ix ", rep[0][i], rep[1][i]);
            for (n = 0; n < rep[1][i]; n++) {
                printf("(%i, %i) ", tempat[rep[0][i] - 1][n].first + 1, tempat[rep[0][i] - 1][n].second + 1);
            }
            printf("\n");
        }
        else if (rep[0][i] == 0) {
            break;
        }
        i++;
    }
}