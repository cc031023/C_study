#include <stdio.h>
// 注意printf的返回值是打印字符的数量.
int main()
{
    printf("%d\n", printf("Hello world!\n") - 1); // 输出13 - 1.
    return 0;
}