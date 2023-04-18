#include <stdio.h>
// 计算1/1 - 1/2 + 1/3 - 1/4 + 1/5……+ 1/99 - 1/100 的值.
int main()
{
    double i = 0, sum = 0;
    for (i = 1; i <= 100; ++i)
    {
        if ((int)i & 1)
            sum += 1 / i;
        else
            sum -= 1 / i;
    }
    printf("%g\n", sum);
    return 0;
}