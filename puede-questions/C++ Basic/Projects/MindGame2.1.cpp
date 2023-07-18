#include <stdio.h>
#include <math.h>

bool checkprocedure() {
    char ans;

    printf("\n\nApakah bilangan yang anda pikirkan ada di atas? (Y/T)  ");
    scanf(" %c", &ans);
    if (ans == 'Y') {
        return true;
    }
    else {
        return false;
    }
}

int main () {
    int i, row, power, answer = 0;
    bool check[8];

    //start 
    printf("Pikirkan suatu bilangan antara 1 sampai dengan 255.\nJika sudah, silahkan tekan sembarang tombol.");
    scanf("");
    printf("\n");
    int k = 0;

    for (power = 2; power <= 256; power *= 2) {
        row = 0;
        //printf("\npower: %i\n", power);
        for (i = 1; i <= 255; i++) {
            if (i % power >= power / 2) {
                if (i >= 100) {
                    printf("  %i", i);
                }
                else if (i >= 10) {
                    printf("   %i", i);
                }
                else {
                    printf("    %i", i);
                }
                row++;
            }
            if (row == 10) {
                printf("\n");
                row = 0;
            }
        }
        check[k] = checkprocedure();
        //printf("\n%i\n", check[k]);
        k++;
        
    }

    //mikir
    for (i = 0; i < 8; i++) {
        if (check[i]) {
            answer += (pow(2, i));
        }
    }
    printf("Bilangan yang anda pikirkan adalah: %i", answer);

}