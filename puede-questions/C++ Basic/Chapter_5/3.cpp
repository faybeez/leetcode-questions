#include <stdio.h>

int main() {
    int choice, counter = 1;

    printf("Masukkan angka: ");
    scanf("%i", &choice);

    while (choice / 10 != 0) {
        choice /= 10;
        counter ++;
    }

    printf("Jumlah digit input: %i digit", counter);

}
