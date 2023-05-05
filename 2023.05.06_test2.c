#include <stdio.h>

inline void init(int n, int arr[10])
{
    int i = 0;
    for (i = 0; i < n; ++i)
    {
        arr[i] = 0;
    }
}

inline void print(int sz, int arr[10])
{
    int i = 0;
    for (i = 0; i < sz; ++i)
    {
        printf("%d%c", arr[i], " \n"[i == sz - 1]);
    }
}

inline void reverse(int sz, int arr[10])
{
    int len = sz >> 1, i = 0;
    for (i = 0; i < len - 1; ++i)
    {
        int temp = arr[sz - i - 1];
        arr[sz - i - 1] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[10];
    int sz = sizeof(arr) / sizeof(arr[0]);
    init(sz, arr);
    print(sz, arr);
    reverse(sz, arr);
    print(sz, arr);
    return 0;
}
