//Swapping 2 numbers
#include <stdio.h>

int main() {
    int angka1, angka2;

    printf("Masukkan angka pertama: ");
    scanf("%i", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%i", &angka2);

    //bitwise operand XOR
    angka1 ^= angka2;
    angka2 ^= angka1;
    angka1 ^= angka2;

    printf("Angka pertama menjadi: %i\nAngka kedua menjadi: %i", angka1, angka2);
}