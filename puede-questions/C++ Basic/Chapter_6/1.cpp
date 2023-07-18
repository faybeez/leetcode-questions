#include <stdio.h>

int main() {
    int choice, counter;

    printf("Masukkan angka: ");
    scanf("%i", &choice);

    while (choice != 0) {
        counter += choice; 
        printf("Masukkan angka: ");
        scanf("%i", &choice);
    }
    
    printf("Hasil jumlah: %i", counter);
}