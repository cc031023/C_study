#include <stdio.h>

int prime[203], vis[203];
int cnt;
// 欧拉筛法求100~200之间的所有质数.
int main()
{
    int i = 0, j = 0;
    for (i = 2; i <= 200; ++i)
    {
        if (!vis[i])          // 为0代表是质数
            prime[cnt++] = i; // 存入质数.
        for (j = 0; j < cnt && prime[j] <= 200 / i; ++j)
        {
            vis[prime[j] * i] = 1; // 标记不是质数的数字.
            if (i % prime[j] == 0) // 后面不用枚举了.
                break;             // 每个数的排除只会被他最小的质因数排掉.
        }
    }
    for (i = 0; i < cnt; ++i)
        if (prime[i] >= 100)
            printf("%d%c", prime[i], " \n"[i == cnt - 1]);
    return 0;
}