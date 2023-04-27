#include <stdio.h>

inline int myPow(int n, int k) // 递归.
{
    if (k == 1)
        return n;
    if (k == 0)
        return 1;
    return n * myPow(n, k - 1);
}

int main()
{
    int n = 0, k = 0;
    scanf("%d%d", &n, &k);
    printf("%d\n", myPow(n, k));
    return 0;
}