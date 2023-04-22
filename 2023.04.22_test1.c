#include <stdio.h>
// 打印n * n乘法表.
int main()
{
    int i = 0, j = 0, n = 0, m = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
        for (j = 1; j <= i; ++j)
            printf("%d * %d = %-2d%c", j, i, i * j, " \n"[j == i]);
    return 0;
}