// Ganti detik ke jam/menit/detik

#include <stdio.h>

int main() {
    int detik;

    printf("Masukkan jumlah detik: ");
    scanf("%i", &detik);

    printf("Waktunya adalah: %i hari, %i jam, %i menit, %i detik.", detik / 86400, detik % 86400 / 3600, detik % 3600 / 60, detik % 60);
}