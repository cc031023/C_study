#include <assert.h>
#include <stdio.h>

char* mystrcpy(char* destination, const char* source) {
    assert(destination != NULL);
    assert(source != NULL);
    char* res = destination;
    while (*source != '\0') {
        *destination++ = *source++;
    }
    *destination = *source;
    return res;
}

int main() {
    char arr[20];
    const char* copy = "abcdefg";
    printf("%s\n", mystrcpy(arr, copy));
    return 0;
}