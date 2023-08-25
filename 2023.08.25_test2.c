#include <stdio.h>

#define SWAP_BIT(n) (n = ((n & 0xaaaaaaaa) >> 1) + ((n & 0x55555555) << 1))

int main() {
    int a = 10;
    printf("%d\n", SWAP_BIT(a));
    return 0;
}