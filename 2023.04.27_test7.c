#include <stdio.h>

inline void printNumber(int n)
{
    if (n < 10)
    {
        printf("%d ", n);
        return;
    }
    printNumber(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printNumber(n);
    return 0;
}
