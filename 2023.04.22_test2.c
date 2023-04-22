#include <stdio.h>
// 自定义函数交换值.
inline void myswap(int *a, int *b)
{
    int temp = *a + *b;
    *a = temp - *a;
    *b = temp - *a;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}