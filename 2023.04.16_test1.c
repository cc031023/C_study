#include <stdio.h>

int main()
{
    int i = 1;
    for (i = 1; i <= 100; ++i) // 从1到100打印3的倍数.
    {
        if (i % 3 == 0)
            printf("%d ", i);
    }
    return 0;
}