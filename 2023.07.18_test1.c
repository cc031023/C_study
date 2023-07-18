#include <stdio.h>

void* mymemcpy(void* destination, const void* source, int num) {
    void* res = destination;
    while (num--) {
        *((char*)destination) = *((char*)source);
        destination = (char*)destination + 1;
        source = (char*)source + 1;
    }
    return res;
}

int main() {
    int arr1[20] = {0};
    int arr2[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    mymemcpy(arr1, arr2, sizeof(arr2));
    for (int i = 0; i < 10; ++i)
        printf("%d%c", arr1[i], " \n"[i == 9]);
    return 0;
}