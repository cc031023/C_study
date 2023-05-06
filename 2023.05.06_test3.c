#include <stdio.h>

inline void bubble_Sort(int arr[10], int sz)
{
    int i = 0;
    for (i = 0; i < sz - 1; ++i)
    {
        int j = 0, flag = 1; // flag判断如果这轮已经排序完毕就不必再排了.
        for (j = 0; j < sz - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] += arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] -= arr[j + 1];
                flag = 0;
            }
        }
        if (flag)
            return;
    }
}

int main()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int i = 0, sz = sizeof(arr) / sizeof(arr[0]);
    bubble_Sort(arr, sz);
    for (i = 0; i < sz; ++i)
    {
        printf("%d%c", arr[i], " \n"[i == sz - 1]);
    }
    return 0;
}
