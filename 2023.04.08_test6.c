#include <stdio.h>
const int N = 3.156e7;
// 简单的算术题注意age可能溢出.
int main()
{
    long long age = 0;
    scanf("%lld", &age);
    printf("%lld", age * N);
    return 0;
}