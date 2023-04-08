#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    b /= 100;
    printf("%.2lf", a / b / b);
    return 0;
}