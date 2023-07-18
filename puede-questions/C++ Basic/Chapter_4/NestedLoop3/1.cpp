#include <stdio.h>
int main() {
    int col, row, batas;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    for (row = 1; row <= batas; row++) {
    	for (col = 1; col <= batas; col++) {
        	if (row == 1 || row == batas || col == 1 || col == batas )
            	printf("* ");
            else
				printf("  ");
        }
        printf("\n");
    }
}

/* int main() {
    int col, row, batas;
    std::string tengah;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    for (row = 1; row <= batas; row++) {
        if (row == 1 || row == batas) {
            for (col = 1; col <= batas; col++) {
            printf("* ");
    }
        }
        else {
            for (col = 1; col <= batas; col++) {
                if (col == 1 || col == batas) {
                    printf("* ");
                }
                else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}

int main() {
    int col, row, batas;
    std::string tengah;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    //construct dulu tengahnya, biar gk buang2 processing power construct hal yg sama berulang kl
    for (col = 1; col <= batas; col++) {
        if (col == 1 || col == batas) {
            tengah += "* ";
        }
        else {
            tengah += "  ";
        }
    }

    for (row = 1; row <= batas; row++) {
        if (row == 1 || row == batas) {
            for (col = 1; col <= batas; col++) {
            printf("* ");
    }
        }
        else {
            printf("%s", tengah.c_str());
        }
        printf("\n");
    }
}
*/