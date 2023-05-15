#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int* p = arr;
    int i = 0;
    for (i = 0; i < 6; ++i) {
        printf("%d%c", *(p + i), " \n"[i == 5]);
    }
    return 0;
}