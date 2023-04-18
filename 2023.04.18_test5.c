#include <stdio.h>
// 二分查找简单运用.
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    int l = 0, r = len - 1;
    int aim = 0;
    scanf("%d", &aim);
    while (l < r)
    {
        int mid = (l + r) >> 1;
        if (arr[mid] > aim)
        {
            r = mid;
        }
        else if (arr[mid] < aim)
        {
            l = mid + 1;
        }
        else
        {
            printf("找到该数字下标为:%d\n", mid);
            return 0;
        }
    }
    printf("在数组中找不到该数字!\n");
    return 0;
}