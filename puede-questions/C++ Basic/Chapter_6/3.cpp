#include <stdio.h>

int main() {
    int choice1, choice2;


    while (true) {
        printf("\nMasukkan angka pertama: ");
        scanf("%i", &choice1);

        printf("Masukkan angka kedua: ");
        scanf("%i", &choice2);
    
        if (choice1 == 0 && choice2 == 0) {
            break;
        }
        else {
            printf("\nHasil jumlah: %i", choice1 + choice2);
        }
    }
    printf("Terima Kasih.");
    
}