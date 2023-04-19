#include <stdio.h>
// 判断字符.
int main()
{
    char x = '\0';
    while ((x = getchar()) != EOF)
    {
        getchar();
        if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
            printf("%c is an alphabet.\n", x);
        else
            printf("%c is not an alphabet.\n", x);
    }
    return 0;
}