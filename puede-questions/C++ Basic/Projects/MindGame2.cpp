#include <stdio.h>
#include <math.h>

void print(int start, int no) {
    //2
    printf("\n");
    int row = 0;
    int repeat = 0;
    while (start <= 255) {
        if (start >= 100) {
            printf("  %i", start);
            start++;
            row++;
            repeat++;
        }
        else if (start >= 10) {
            printf("   %i", start);
            start++;
            row++;
            repeat++;
        }
        else {
            printf("    %i", start);
            start++;
            row++;
            repeat++;
        }

        if (repeat == no) {
            repeat = 0;
            start += 2;
        }
        
        if (row == 10) {
            row = 0;
            printf("\n");
        }
    }
}

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
    int i, row = 0, answer = 0;
    bool check[8];

    //start 
    printf("Pikirkan suatu bilangan antara 1 sampai dengan 255.\nJika sudah, silahkan tekan sembarang tombol.");
    scanf("");

    //1
    for (i = 1; i <= 255; i+=2) {
        if (i >= 100) {
            printf("  %i", i);
            row++;
        }
        else if (i >= 10) {
            printf("   %i", i);
            row++;
        }
        else {
            printf("    %i", i);
            row++;
        }
        
        if (row == 10) {
            row = 0;
            printf("\n");
        }
    }
    //check 1
    check[7] = checkprocedure();

    //2 -- dari sini sebenernya bisa pake for loop
    print(2, 2);

    //check 2
    check[6] = checkprocedure();

    //3
    print(4, 4);

    //check 3
    check[5] = checkprocedure();

    //4
    print(8,8);
    check[4] = checkprocedure();

    //5
    print(16,16);
    check[3] = checkprocedure();

    //6
    print(32,32);
    check[2] = checkprocedure();

    //7
    print(64,64);
    check[1] = checkprocedure();

    //8
    print(128,128);
    check[0] = checkprocedure();

    //mikir
    for (i = 0; i < 8; i++) {
        if (check[i]) {
            answer += (pow(2, 7-i));
        }
    }
    printf("Bilangan yang anda pikirkan adalah: %i", answer);

}