#include <stdio.h>
// 简单累加.
int main()
{
    int n = 0, i = 0;
    scanf("%d", &n);
    long long sum = 0;
    for (i = 1; i <= n; ++i)
        sum += i;
    printf("%lld\n", sum);
    return 0;
}