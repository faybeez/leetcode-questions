//Hitung luas dan keliling bujur sangkar

#include <stdio.h>

int main() {
    printf("Masukkanlah sisi dari bujur sangkar: ");

    int sisi;
    scanf("%i", &sisi);

    printf("Luas dari bujur sangkar adalah: %i\nKeliling dari bujur sangkar adalah: %i", sisi*sisi, sisi * 4);
    return 0;
}