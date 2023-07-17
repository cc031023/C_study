#include <assert.h>
#include <stdio.h>

char* mystrcat(char* destination, const char* source) {
    assert(destination != NULL && source != NULL);
    char* res = destination;
    while (*destination != '\0')
        ++destination;
    while (*destination++ = *source++)
        ;
    return res;
}

int main() {
    char arr[20] = "Hello ";
    const char* s = "world!";
    printf("%s\n", mystrcat(arr, s));
    return 0;
}