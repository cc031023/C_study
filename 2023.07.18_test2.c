#include <stdio.h>

void* mymemmove(void* destination, const void* source, int num) {
    void* res = destination;
    if (destination < source) {
        while (num--) {
            *((char*)destination) = *((char*)source);
            destination = (char*)destination + 1;
            source = (char*)source + 1;
        }
    } else {
        while (num--) {
            *((char*)destination + num) = *((char*)source + num);
        }
    }
    return res;
}

int main() {
    int arr1[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    mymemmove(arr1, arr1 + 2, 20);
    for (int i = 0; i < 10; ++i)
        printf("%d%c", arr1[i], " \n"[i == 9]);
    return 0;
}
