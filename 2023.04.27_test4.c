#include <stdio.h>

inline int myStrlen(char *arr) // 递归.
{
    if (*arr == '\0')
        return 0;
    return myStrlen(arr + 1) + 1;
}

inline void reverse_string(char *string)
{
    if (myStrlen(string) < 2)
        return;
    char temp = *string;
    int len = myStrlen(string);
    *string = *(string + len - 1);
    *(string + len - 1) = '\0';
    reverse_string(string + 1);
    *(string + len - 1) = temp;
}

int main()
{
    char arr[123];
    scanf("%s", arr);
    reverse_string(arr);
    printf("%s", arr);
    return 0;
}
