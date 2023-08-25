#include <stdio.h>

#define OFFSETOF(type, name) (size_t)&((type*)0)->name

struct node {
    int a;
    char b;
    int c;
};

int main() {
    printf("%d\n", OFFSETOF(node, a));
    printf("%d\n", OFFSETOF(node, b));
    printf("%d\n", OFFSETOF(node, c));
    return 0;
}