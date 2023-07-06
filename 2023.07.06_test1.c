#include <stdio.h>
int mp[123][123];  // 数字矩阵.
int main() {
    // 依靠单调性从左下角开始寻找.
    int n = 0, m = 0;  // 矩阵几行几列.
    printf("请输入矩阵有几行几列:>\n");
    scanf("%d%d", &n, &m);
    int aim = 0;  // 目标数字.
    printf("请输入待查找的数字\n");
    scanf("%d", &aim);
    int i = 0, j = 0;
    printf("请输入矩阵的信息:\n");
    for (i = 0; i < n; ++i)
        for (j = 0; j < m; ++j) scanf("%d", &mp[i][j]);  // 输入矩阵.
    int flag = 0;                                        // 记录在矩阵中是否找到该数字.
    int x = n - 1, y = 0;                                // 代表当前坐标(从左下角开始找).
    while (x >= 0 && y < m) {
        if (aim < mp[x][y]) {
            --x;
        } else if (aim > mp[x][y]) {
            ++y;
        } else {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("存在\n");
    else
        printf("不存在\n");

    return 0;
}