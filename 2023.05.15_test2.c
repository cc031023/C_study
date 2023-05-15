#include <stdio.h>
#define N 10007
char arr[N];

void MyPrint(char* s) {
    if (*s == '\0')
        return;
    MyPrint(s + 1);
    printf("%c", *s);
}

int main() {
    gets(arr);
    MyPrint(arr);
    return 0;
}