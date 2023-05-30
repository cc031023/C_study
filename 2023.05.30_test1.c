#include <stdio.h>

int main() {
    char i = 0;

    for (i = 'A'; i <= 'D'; ++i)
        if (((i != 'A') + (i == 'C') + (i == 'D') + (i != 'D')) == 3)
            printf("凶手是%c!\n", i);

    return 0;
}
