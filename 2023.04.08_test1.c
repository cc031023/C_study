#include <stdio.h>
// 两数里求大的那个数.
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a > b ? a : b);
    return 0;
}