#include <assert.h>
#include <stdio.h>

int mystrcmp(const char* arr1, const char* arr2) {
    assert(arr1 != NULL && arr2 != NULL);
    while (*arr1 == *arr2) {
        if (*arr1 == '\0' || *arr2 == '\0') break;
        ++arr1;
        ++arr2;
    }
    return *arr1 - *arr2;
}

int main() {
    char arr1[] = "abcdea";
    char arr2[] = "abcdgr";
    int res = mystrcmp(arr1, arr2);
    if (res > 0)
        printf("大于\n");
    else if (res < 0)
        printf("小于\n");
    else
        printf("等于\n");
    return 0;
}
