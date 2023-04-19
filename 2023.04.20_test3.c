#include <stdio.h>
// 简单判断大小.
int main()
{
    int a = 0, ans = 0, i = 0;
    scanf("%d", &ans);
    for (i = 0; i < 3; ++i)
    {
        scanf("%d", &a);
        ans = ans > a ? ans : a;
    }
    printf("%d\n", ans);
    return 0;
}