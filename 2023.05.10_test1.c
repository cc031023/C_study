#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
    // 法一.
    printf("a是%d, b是%d\n", a, b);
    a += b;
    b = a - b;
    a -= b;
    printf("a是%d, b是%d\n", a, b);

    // 法二.
    a ^= b;
    b ^= a;
    a ^= b;
    printf("a是%d, b是%d\n", a, b);
    return 0;
}