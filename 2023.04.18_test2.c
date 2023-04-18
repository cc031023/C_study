#include <stdio.h>
// 十个数求最大值.
int main()
{
    int i = 10, ans = 0, now = 0;
    scanf("%d", &ans);
    while (--i)
    {
        scanf("%d", &now);
        ans = ans > now ? ans : now;
    }
    printf("%d\n", ans);
    return 0;
}