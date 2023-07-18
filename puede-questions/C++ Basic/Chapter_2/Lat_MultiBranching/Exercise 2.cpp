// Cek kategori umur

#include <stdio.h>

int main() {

    int usia;
    printf("Masukkan usia: ");
    scanf("%i", &usia);

    if (usia >= 60) {
        printf("Lansia");
    }
    else if (usia >= 20) {
        printf("Dewasa");
    }
    else if (usia >= 13) {
        printf("Remaja");
    }
    else if (usia >= 5) {
        printf("Anak");
    }
    else if (usia >= 0) {
        printf("Balita");
    }
    else {
        printf("Salah angka (negatif)");
    }
}