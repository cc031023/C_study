#include <stdio.h>

inline int check(int n)
{
    return n % 4 == 0 && n % 100 || n % 400 == 0;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    if (check(n))
        printf("%d是闰年\n", n);
    else
        printf("%d不是闰年\n", n);
    return 0;
}