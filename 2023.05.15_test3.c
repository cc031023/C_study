#include <math.h>
#include <stdio.h>

int main() {
    int i = 0;
    for (i = 1; i <= 13; ++i) {
        int j = 0;
        for (j = 1; j <= 13; ++j) {
            if (j <= abs(7 - i) || j >= 14 - abs(7 - i))
                printf(" ");
            else
                printf("*");
        }
        puts("");
    }
    return 0;
}