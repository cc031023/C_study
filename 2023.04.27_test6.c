#include <stdio.h>

inline int factorial(int n) // 递归.
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n = 0, i = 0, sum = 1;
    scanf("%d", &n);
    printf("%d\n", factorial(n)); // 递归结果.
    for (i = 2; i <= n; ++i)      // 迭代.
    {
        sum *= i;
    }
    printf("%d\n", sum); // 迭代结果.
    return 0;
}
