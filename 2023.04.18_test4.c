#include <stdio.h>
// 求1到100中数字9出现的个数.
inline int getNine(int x)
{
    int res = 0;
    while (x)
    {
        if (x % 10 == 9)
            ++res;
        x /= 10;
    }
    return res;
}

int main()
{
    int i = 0, ans = 0;
    for (i = 1; i <= 100; ++i)
    {
        ans += getNine(i);
    }
    printf("%d\n", ans);
    return 0;
}