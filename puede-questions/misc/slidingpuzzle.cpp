#include <stdio.h>
#include <random>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int panjang;
int bilangan[10][10];

void printsquare() {
    int i, n;
    for (i = 0; i < panjang; i++) {
        for (n = 0; n < panjang; n++) {
            if (bilangan[i][n] >= 10) {
                printf("%i  ", bilangan[i][n]);
            }
            else if (bilangan[i][n] > 0) {
                printf("0%i  ", bilangan[i][n]);
            }
            else {
                printf("    ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}

bool checkwin() {
    int i, n, count = 1;
    for (i = 0; i < panjang; i++) {
        for (n = 0; n < panjang; n++) {
            if (count == 9) {
                count = 0;
            }
            if (bilangan[i][n] != count) {
                //printf("\nbil: %i, n: %i, i: %i, count: %i\n", bilangan[i][n], n, i, count);
                return false;
            }
            else {
                count++;
            }
        }
    }
    return true;
}

int main() {
    int i, n, randh, key = 0, counter = 0;
    srand(time(nullptr));

    printf("Besar puzzle: ");
    scanf("%i", &panjang);
    bool check[panjang*panjang];

    

    while (true) {

        for (i = 0; i < panjang * panjang; i++) {
        check[i] = false;
        }

        for (i = 0; i < panjang; i++) {
            for (n = 0; n < panjang; n++) {
                randh = rand() % (panjang * panjang - 1) + 1; 
                if (!check[randh - 1]) {
                    bilangan[i][n] = randh;
                    check[randh - 1] = true;
                }
                else if (n == panjang - 1 && i == panjang - 1) {
                    bilangan[i][n] = 0;
                    break;
                }
                else {
                    n--;
                }
            }
        }

        for (i = 0; i < panjang * panjang; i++) {
            check[i] = false;
        }

        int x;

        printsquare();

        counter = 0;
        //check if puzzle if doable
        for (i = 0; i < panjang; i++) {
            for (n = 0; n < panjang; n++) {
                check[bilangan [i][n]-1] = true;
                for (x = 1; x < bilangan [i][n]; x++) {
                    if (!check[x-1]) {
                        counter ++;
                    }
                }
            }
        }
        //printf("\ncount: %i\n", counter);
        if (counter % 2 == 0) {
            printsquare();
            break;
        }

    }

    i = panjang - 1;
    n = panjang - 1;
    counter = 0;

    while (key != 27) {
        key = getch();
        if(key==77) {
            if (n - 1 >= 0) {
                bilangan[i][n] = bilangan[i][n-1];
                n -= 1;
                bilangan[i][n] = 0;
                printsquare();
                counter ++;
            }
        }
        else if(key==75){
            if (n + 1 < panjang) {
                bilangan[i][n] = bilangan[i][n+1];
                n += 1;
                bilangan[i][n] = 0;
                printsquare();
                counter ++;
            }
            }
        else if(key==72){
            if (i + 1 < panjang) {
                bilangan[i][n] = bilangan[i+1][n];
                i += 1;
                bilangan[i][n] = 0;
                printsquare();
                counter ++;
            }
            }
        else if(key==80){
            if (i - 1 >= 0) {
                bilangan[i][n] = bilangan[i-1][n];
                i -= 1;
                bilangan[i][n] = 0;
                printsquare();
            }
        }

        if (checkwin()) {
            printf("\nKamu menang dalam %i langkah!", counter);
            break;
        }
    }

}