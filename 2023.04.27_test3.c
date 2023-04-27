#include <stdio.h>

inline int DigitSum(int n) // 求各个数字和.
{
    if (n < 10)
        return n;
    return n % 10 + DigitSum(n / 10);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", DigitSum(n));
    return 0;
}