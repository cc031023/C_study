#include <stdio.h>
// 知道体重和身高求BMI.
int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    b /= 100;
    printf("%.2lf\n", a / b / b);
    return 0;
}