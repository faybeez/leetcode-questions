// Cek bilangan terakhir kelipatan 4

#include <stdio.h>

int main() {

    int bilangan;
    printf("Masukkan sebuah bilangan: ");
    scanf("%i", &bilangan);

    if (bilangan % 10 % 4 == 0) {
        printf("Digit terakhir kelipatan 4");
    }
    else {
        printf("Digit terakhir bukan kelipatan 4");
    }
}