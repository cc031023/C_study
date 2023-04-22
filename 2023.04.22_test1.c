#include <stdio.h>
// 打印n * n乘法表.

inline void myprint(int n)
{
    int i = 0, j = 0;
    for (i = 1; i <= n; ++i)
        for (j = 1; j <= i; ++j)
            printf("%d * %d = %-2d%c", j, i, i * j, " \n"[j == i]);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    myprint(n);
    return 0;
}