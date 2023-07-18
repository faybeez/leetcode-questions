// Hitung lembar gaji

#include <stdio.h>

int main() {
    int gaji;

    printf("Masukkan jumlah gaji: ");
    scanf("%i", &gaji);
    
    int l_100 = gaji / 100'000;
    int l_50 = gaji % 100'000 / 50'000;
    int l_20 = gaji % 50'000 / 20'000;
    int l_10 = gaji % 50'000 % 20'000 / 10'000;
    int l_5 = gaji % 10'000 / 5'000;
    int l_2 = gaji % 10'000 % 5'000 / 2'000;
    int l_1 = gaji % 5'000 % 2'000 / 1'000;

    printf("100.000 = %i lembar\n50.000 = %i lembar\n20.000 = %i lembar\n10.000 = %i lembar\n5.000 = %i lembar\n2.000 = %i lembar\n1.000 = %i lembar",l_100,l_50,l_20,l_10,l_5,l_2,l_1);
}