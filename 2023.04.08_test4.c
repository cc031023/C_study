#include <stdio.h>
// 给三个数判断三角形.
int main()
{
    int a, b, c;
    while (~scanf("%d%d%d", &a, &b, &c)) // 使得a > b > c.
    {
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
        if (b + c <= a)
        {
            printf("Not a triangle!\n");
        }
        else
        {
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            else if (a == b || b == c)
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
    }
    return 0;
}