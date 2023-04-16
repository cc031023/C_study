#include <stdio.h>

inline int check(int x)
{
    return x % 400 == 0 || (x % 4 == 0 && x % 100);
}
int main()
{
    register int i = 0;
    for (i = 1000; i <= 2000; ++i)
        if (check(i))
            printf("%d\n", i);
    return 0;
}