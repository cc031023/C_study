#include <stdio.h>
#define N 10000
int a[N][N];

int main() {
    int n = 0;
    printf("输入n确定打印几行杨辉三角(最多一万行):> ");
    scanf("%d", &n);
    a[1][1] = 1;  // 初始化.
    int i = 0, j = 0;
    for (i = 1; i <= n; ++i)
        for (j = 1; j <= i; ++j)
            printf("%d%c", a[i][j] += a[i - 1][j] + a[i - 1][j - 1],
                   " \n"[j == i]);

    return 0;
}
