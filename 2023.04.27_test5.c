#include <stdio.h>

inline int myStrlen(char *arr) // 递归.
{
    if (*arr == '\0')
        return 0;
    return myStrlen(arr + 1) + 1;
}

int main()
{
    char arr[123];
    int i = 0, count = 0;
    scanf("%s", arr);
    printf("%d\n", myStrlen(arr));   // 输出递归结果.
    for (i = 0; arr[i] != '\0'; ++i) // 迭代.
        ++count;
    printf("%d\n", count); // 输出迭代结果.
    return 0;
}
