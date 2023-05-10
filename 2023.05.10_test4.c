#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
    int ans = 0;
    int i = 0;
    for (i = 0; i < 32; ++i) {
        if (((a >> i) & 1) != ((b >> i) & 1)) {
            ++ans;
        }
    }
    printf("%d\n", ans);
    return 0;
}