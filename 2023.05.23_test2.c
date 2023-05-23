#include <stdio.h>

int main() {
    int n = 0;
    while (~scanf("%d", &n)) {
        int i = 0, j = 0;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n - i - 1; ++j)
                printf("  ");

            for (j = 0; j <= i; ++j)
                printf("* ");

            puts("");
        }
    }
    return 0;
}
