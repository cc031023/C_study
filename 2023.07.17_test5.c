#include <assert.h>
#include <stdio.h>

char* mystrstr(const char* arr1, const char* arr2) {
    assert(arr1 != NULL && arr2 != NULL);
    if (*arr2 == '\0') return NULL;

    while (*arr1) {
        const char* h = arr1;
        const char* n = arr2;

        while (*h && *n && *h == *n) {
            ++h;
            ++n;
        }

        if (*n == '\0') return (char*)arr1;  // 如果 arr2 完全匹配，返回匹配位置的指针.

        ++arr1;  // 如果不匹配，则 arr1 后移一位，继续尝试.
    }

    return NULL;  // 如果没有匹配到，返回 NULL.
}

int main() {
    char arr[] = "abcdefg";
    const char* s = "cde";
    char* res = mystrstr(arr, s);
    if (res != NULL) {
        printf("%s\n", res);
    } else {
        printf("找不到!\n");
    }
    return 0;
}
