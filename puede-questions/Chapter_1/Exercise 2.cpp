//Hitung luas dan keliling persegi panjang

#include <stdio.h>

int main() {
    int panjang;
    int lebar;

    printf("Masukkan panjang dari persegi: ");
    scanf("%i", &panjang);
    printf("Masukkan lebar dari persegi: ");
    scanf("%i", &lebar);

    printf("Luas dari persegi adalah: %i\nKeliling dari persegi adalah: %i", panjang * lebar, 2 * (panjang + lebar));
}
