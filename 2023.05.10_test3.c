#include <stdio.h>

void PrintBit(int num) {
    int i = 0;
    printf("奇数序列为: ");
    for (i = 30; i >= 0; i -= 2) {
        printf("%d%c", (num >> i) & 1, " \n"[i == 0]);
    }
    printf("偶数序列为: ");
    for (i = 31; i >= 1; i -= 2) {
        printf("%d%c", (num >> i) & 1, " \n"[i == 1]);
    }
}

int main() {
    int num = 0;
    scanf("%d", &num);
    PrintBit(num);
    return 0;
}