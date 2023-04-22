#include <stdio.h>
// 简单购物应用题
int main()
{
    double val = 0;
    int month = 0, day = 0, num = 0;
    scanf("%lf%d%d%d", &val, &month, &day, &num);
    if (month == day)
    {
        if (month == 11)
        {
            val *= 0.7;
            val -= num * 50;
        }
        else if (month == 12)
        {
            val *= 0.8;
            val -= num * 50;
        }
    }
    printf("%.2lf", val > 0 ? val : 0);
    return 0;
}