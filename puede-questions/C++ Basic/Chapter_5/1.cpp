#include <stdio.h>

int main() {
    int choice;

    printf("1. Food\n2. Beverage\n");
    printf("Pilih: ");
    scanf("%i", &choice);

    while (choice != 1 && choice != 2) {
        printf("\nSalah pilihan!\n");
        printf("Pilih: ");
        scanf("%i", &choice);
    }
    if (choice == 1)
        printf("\nYour food in on the way.");
    else
        printf("\nYour beverage is on the way.");
}