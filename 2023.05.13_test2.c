#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int i = 0, val = 0, pre = 0;
    int countless = 0;     // 记录从小到大次数.
    int countgreater = 0;  // 记录从大到小次数.
    scanf("%d", &pre);
    for (i = 1; i < n; ++i) {
        scanf("%d", &val);

        if (val < pre)
            ++countgreater;
        else if (val > pre)
            ++countless;

        pre = val;
    }
    if (countless > 0 && countgreater > 0)
        printf("unsorted\n");
    else
        printf("sorted\n");
    return 0;
}