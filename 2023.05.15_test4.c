#include <math.h>
#include <stdio.h>

int Count(int x) {
    int res = 0;
    while (x > 9) {
        ++res;
        x /= 10;
    }
    return res + 1;
}

int Check(int x) {
    int copy = x;
    int num = 0;
    int times = Count(x);
    while (x > 0) {
        num += pow((x % 10), times);
        x /= 10;
    }
    return copy == num;
}

int main() {
    int i = 0;
    for (i = 0; i <= 100000; ++i) {
        if (Check(i) == 1)
            printf("%d ", i);
    }
    puts("");
    return 0;
}