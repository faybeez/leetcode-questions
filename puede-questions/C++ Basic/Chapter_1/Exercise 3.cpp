// Menghitung sisi miring dari segitiga siku-siku

#include <stdio.h>
#include <cmath>

int main() {
    int alas, tinggi;

    printf("Masukkan alas dari segitiga siku-siku: ");
    scanf("%i", &alas);
    printf("Masukkan tinggi dari segitiga siku-siku: ");
    scanf("%i", &tinggi);

    printf("Sisi miring dari segitiga siku-siku adalah: %.2f", sqrt(pow(alas,2) + pow(tinggi,2)));
}