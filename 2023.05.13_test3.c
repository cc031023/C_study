#include <stdio.h>

int monthday[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int CheckYear(int year) {
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int GetDayCount(int year, int month) {
    if (CheckYear(year) && month == 2)
        return monthday[month - 1] + 1;
    else
        return monthday[month - 1];
}

int main() {
    int year = 0;
    int month = 0;
    while (~scanf("%d%d", &year, &month)) {
        printf("%d\n", GetDayCount(year, month));
    }
    return 0;
}