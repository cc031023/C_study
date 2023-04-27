#include <stdio.h>
#include <string.h>

inline void reverse_string(char *string)
{
    if (strlen(string) < 2)
        return;
    char temp = *string;
    int len = strlen(string);
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
