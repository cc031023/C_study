#include <stdio.h>

int main() {
    int n = 0;
    int i = 0, j = 0;
    while (~scanf("%d", &n)) {
        for (i = 0; i < n; ++i) {
            for (j = 0; j < n; ++j) {
                if (i == j || j == n - i - 1)
                    printf("*");
                else
                    printf(" ");
            }
            puts("");
        }
    }
    return 0;
}