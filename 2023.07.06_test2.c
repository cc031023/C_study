#include <malloc.h>
#include <stdio.h>
#include <string.h>

char* LeftReverse(char* arr, int k, int len) {
    if (k == 0) return arr;
    char* res = (char*)malloc(len * sizeof(char));
    int i = 0;
    int now = 0;
    for (i = k; i < len; ++i) res[now++] = arr[i];
    for (i = 0; i < k; ++i) res[now++] = arr[i];
    res[now] = '\0';
    return res;
}

int main() {
    char arr[123];
    scanf("%s", arr);
    int k = 0;
    scanf("%d", &k);
    int len = strlen(arr);
    k %= len;
    char* ans = LeftReverse(arr, k, len);
    printf("%s\n", ans);
    return 0;
}