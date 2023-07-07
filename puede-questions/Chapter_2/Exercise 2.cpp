// Hitung lembar gaji

#include <stdio.h>

int main() {
    int gaji;

    printf("Masukkan jumlah gaji: ");
    scanf("%i", &gaji);

    printf("100.000 = %i lembar\n50.000 = %i lembar\n20.000 = %i lembar\n10.000 = %i lembar\n5.000 = %i lembar\n2.000 = %i lembar\n1.000 = %i lembar", gaji / 100'000, gaji % 100'000 / 50'000, gaji % 50'000 / 20'000, gaji % 50'000 % 20'000 / 10'000, gaji % 10'000 / 5'000, gaji % 5'000 / 2'000, gaji % 5'000 % 2'000 / 1'000);
}