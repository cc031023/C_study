#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[123];
    char arr2[123];
    scanf("%s%s", arr1, arr2);
    for (int i = 0; i < strlen(arr1); ++i)
    {
        char ch = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = ch;
    }
    printf("%s\n%s\n", arr1, arr2);
    return 0;
}
