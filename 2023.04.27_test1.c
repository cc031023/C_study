#include <stdio.h>

inline int fibonacci(int n) // 递归.
{
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n = 0, i = 0;
    int a = 1, b = 1;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n)); // 递归.
    for (i = 2; i <= n; ++i)      //  迭代.
    {
        a = a + b;
        b = a - b;
    }
    printf("%d\n", b);
    return 0;
}