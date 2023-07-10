#include <stdio.h>
#include <random>
#include <time.h>

int main() {
    int batas, progress, num, filledarr = 0;
    bool inarray;
    srand(time(nullptr));

    printf("Batas: ");
    scanf("%i", &batas);
    int arr[batas];

    while (filledarr < batas) {
        num = rand() % 20 + 1;
        inarray = true;
        for (progress = 0; progress <= filledarr; progress++) {
            if (arr[progress] == num) {
                inarray = false;
                break;
            }
        }
        if (inarray) {
            arr[filledarr] = num;
            printf("%i ", arr[filledarr]);
            filledarr ++;
        }
    }
}
