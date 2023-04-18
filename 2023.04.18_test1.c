#include <stdio.h>
// 打印9 * 9乘法表.
int main()
{
    int i = 0, j = 0;
    for (i = 1; i <= 9; ++i)
        for (j = 1; j <= i; ++j)
            printf("%d * %d = %-2d %c", j, i, i * j, " \n"[j == i]);
    return 0;
}