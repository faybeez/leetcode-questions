#include <stdio.h>

int main() {
    int choice, counter;


    while (true) {
        printf("Masukkan angka: ");
        scanf("%i", &choice);

        if (choice == 0) {
            break;
        }
        else if (choice % 3 == 0) {
            continue;
        }
        else {
            counter += choice; 
        }
    }
    
    printf("Hasil jumlah: %i", counter);
}