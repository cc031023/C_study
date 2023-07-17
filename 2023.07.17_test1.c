#include <stdio.h>

size_t mystrlen(const char* s) {
    if (s == NULL) return 0;
    int res = 0;
    while (*s && ++s && ++res)
        ;
    return res;
}

int main() {
    char arr[] = "abcdef";
    printf("%d\n", mystrlen(arr));
    return 0;
}