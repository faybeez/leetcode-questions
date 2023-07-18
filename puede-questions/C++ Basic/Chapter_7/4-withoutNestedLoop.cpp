#include <stdio.h>
#include <random>
#include <time.h>

int main() {
    int batas, num, filledarr = 0;
    bool inarray;
    srand(time(nullptr));

    printf("Batas: ");
    scanf("%i", &batas);
    int arr[batas];
    bool check[20] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, };

    while (filledarr < batas) {
        num = rand() % 20 + 1;
        if (!check[num-1]) {
            check[num-1] = true;
            arr[filledarr] = num;
            filledarr++;
            printf("%i ", num);
        }
    }
}
