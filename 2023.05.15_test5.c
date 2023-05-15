#include <stdio.h>

int GetSum(int x) {
    return (1 + 11 + 111 + 1111 + 11111) * x;
}

int main() {
    // 懒得考虑a是多位数感觉有点麻烦hh.
    // 默认a是0~9.
    int a = 0;
    scanf("%d", &a);
    printf("%d\n", GetSum(a));
    return 0;
}