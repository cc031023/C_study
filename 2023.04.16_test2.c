#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b)
    {
        a += b;
        b = a - b;
        a -= b;
    }
    if (a < c)
    {
        a += c;
        c = a - c;
        a -= c;
    }
    if (b < c)
    {
        b += c;
        c = b - c;
        b -= c;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}