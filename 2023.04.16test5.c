#include <stdio.h>

inline int gcd(int a, int b) // a,b可以为0.
{
    if (b)
        while ((a %= b) && (b %= a))
            ;
    return a + b;
}
int main()
{
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b));
    return 0;
}