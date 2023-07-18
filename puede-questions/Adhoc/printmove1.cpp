#include <stdio.h>
#include <string>
#include <string.h>

int main() {
    int row, col, commands, c, i, n, count = 1, moverow = 0, movecol = 0, rep = 0, x, y;
    int add0;
    char command[5];

    scanf("%i %i", &row, &col);
    scanf("%i", &commands);

    int arr[row][col];

    if (row * col >= 1000) {
        add0 = 3;
    }
    else if (row * col >= 100) {
        add0 = 2;
    }
    else if (row * col >= 10) {
        add0 = 1;
    }
    else {
        add0 = 0;
    }

    for (i = 0; i < row; i++) {
        for (n = 0; n < col; n++) {
            if (add0 == 3) {
                if (count / 10 == 0) {
                    printf("000%i", count);
                }
                else if (count / 100 == 0) {
                    printf("00%i", count);
                }
                else if (count / 1000 == 0) {
                    printf("0%i", count);
                }
                else {
                    printf("%i", count);
                }
            }
            else if (add0 == 2) {
                if (count / 10 == 0) {
                    printf("00%i", count);
                }
                else if (count / 100 == 0) {
                    printf("0%i", count);
                }
                else {
                    printf("%i", count);
                }
            }
            else if (add0 == 3) {
                if (count / 10 == 0) {
                    printf("0%i", count);
                }
                else {
                    printf("%i", count);
                }
            }
            else {
                printf("%i", count);
            }

            if (n != col - 1) {
                printf(" ");
            }
            
            arr[i][n] = count;
            count++;
        }
        printf("\n");
    }

    for (c = 1; c <= commands; c++) {
        scanf("%s", &command);
        printf("Command #%i:\n", c);

        if (!strcmp(command, "up")) {
            moverow ++;

            //print
            for (i = 0; i < row; i++) {
                for (n = 0; n < col; n++) {
                    x = i + moverow;
                    y = n + movecol;
                    while (x > row - 1) {
                        x -= row;
                    }
                    while (x < 0) {
                        x += row;
                    }

                    while (y > col - 1) {
                        y -= col;
                    }
                    while (y < 0) {
                        y += col;
                    }
                    
                    count = arr[x][y];
                    if (add0 == 3) {
                        if (count / 10 == 0) {
                            printf("000%i", count);
                        }
                        else if (count / 100 == 0) {
                            printf("00%i", count);
                        }
                        else if (count / 1000 == 0) {
                            printf("0%i", count);
                        }
                        else {
                            printf("%i", count);
                        }
                    }
                    else if (add0 == 2) {
                        if (count / 10 == 0) {
                            printf("00%i", count);
                        }
                        else if (count / 100 == 0) {
                            printf("0%i", count);
                        }
                        else {
                            printf("%i", count);
                        }
                    }
                    else if (add0 == 3) {
                        if (count / 10 == 0) {
                            printf("0%i", count);
                        }
                        else {
                            printf("%i", count);
                        }
                    }
                    else {
                        printf("%i", count);
                    }

                    if (n != col - 1) {
                        printf(" ");
                    }

                }
                printf("\n");
            }
        }
        else if (!strcmp(command, "down")) {
            moverow --;

            //print
            for (i = 0; i < row; i++) {
                for (n = 0; n < col; n++) {
                    x = i + moverow;
                    y = n + movecol;
                    while (x > row - 1) {
                        x -= row;
                    }
                    while (x < 0) {
                        x += row;
                    }

                    while (y > col - 1) {
                        y -= col;
                    }
                    while (y < 0) {
                        y += col;
                    }
                    
                    count = arr[x][y];
                    if (add0 == 3) {
                        if (count / 10 == 0) {
                            printf("000%i", count);
                        }
                        else if (count / 100 == 0) {
                            printf("00%i", count);
                        }
                        else if (count / 1000 == 0) {
                            printf("0%i", count);
                        }
                        else {
                            printf("%i", count);
                        }
                    }
                    else if (add0 == 2) {
                        if (count / 10 == 0) {
                            printf("00%i", count);
                        }
                        else if (count / 100 == 0) {
                            printf("0%i", count);
                        }
                        else {
                            printf("%i", count);
                        }
                    }
                    else if (add0 == 3) {
                        if (count / 10 == 0) {
                            printf("0%i", count);
                        }
                        else {
                            printf("%i", count);
                        }
                    }
                    else {
                        printf("%i", count);
                    }

                    if (n != col - 1) {
                        printf(" ");
                    }

                }
                printf("\n");
            }
        }
        else if (!strcmp(command, "left")) {
            movecol ++;
            
            //print
            for (i = 0; i < row; i++) {
                for (n = 0; n < col; n++) {
                    x = i + moverow;
                    y = n + movecol;
                    while (x > row - 1) {
                        x -= row;
                    }
                    while (x < 0) {
                        x += row;
                    }

                    while (y > col - 1) {
                        y -= col;
                    }
                    while (y < 0) {
                        y += col;
                    }
                    
                    count = arr[x][y];
                    if (add0 == 3) {
                        if (count / 10 == 0) {
                            printf("000%i", count);
                        }
                        else if (count / 100 == 0) {
                            printf("00%i", count);
                        }
                        else if (count / 1000 == 0) {
                            printf("0%i", count);
                        }
                        else {
                            printf("%i", count);
                        }
                    }
                    else if (add0 == 2) {
                        if (count / 10 == 0) {
                            printf("00%i", count);
                        }
                        else if (count / 100 == 0) {
                            printf("0%i", count);
                        }
                        else {
                            printf("%i", count);
                        }
                    }
                    else if (add0 == 3) {
                        if (count / 10 == 0) {
                            printf("0%i", count);
                        }
                        else {
                            printf("%i", count);
                        }
                    }
                    else {
                        printf("%i", count);
                    }

                    if (n != col - 1) {
                        printf(" ");
                    }

                }
                printf("\n");
            }
        }
        else if (!strcmp(command, "right")) {
            movecol --;

            //print
            for (i = 0; i < row; i++) {
                for (n = 0; n < col; n++) {
                    x = i + moverow;
                    y = n + movecol;
                    while (x > row - 1) {
                        x -= row;
                    }
                    while (x < 0) {
                        x += row;
                    }

                    while (y > col - 1) {
                        y -= col;
                    }
                    while (y < 0) {
                        y += col;
                    }
                    
                    count = arr[x][y];
                    if (add0 == 3) {
                        if (count / 10 == 0) {
                            printf("000%i", count);
                        }
                        else if (count / 100 == 0) {
                            printf("00%i", count);
                        }
                        else if (count / 1000 == 0) {
                            printf("0%i", count);
                        }
                        else {
                            printf("%i", count);
                        }
                    }
                    else if (add0 == 2) {
                        if (count / 10 == 0) {
                            printf("00%i", count);
                        }
                        else if (count / 100 == 0) {
                            printf("0%i", count);
                        }
                        else {
                            printf("%i", count);
                        }
                    }
                    else if (add0 == 3) {
                        if (count / 10 == 0) {
                            printf("0%i", count);
                        }
                        else {
                            printf("%i", count);
                        }
                    }
                    else {
                        printf("%i", count);
                    }

                    if (n != col - 1) {
                        printf(" ");
                    }

                }
                printf("\n");
            }
        }
    }
}