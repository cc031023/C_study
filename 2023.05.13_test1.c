#include <stdio.h>

int main() {
    int n = 0, m = 0;
    scanf("%d%d", &n, &m);
    int arr1[1003] = {0};
    int arr2[1003] = {0};
    int i = 0;
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < m; ++i) {
        scanf("%d", &arr2[i]);
    }
    int head1 = 0, head2 = 0;
    while (head1 < n || head2 < m) {
        if (head1 < n && head2 < m) {
            if (arr1[head1] < arr2[head2])
                printf("%d ", arr1[head1++]);
            else
                printf("%d ", arr2[head2++]);
        } else if (head1 < n) {
            printf("%d ", arr1[head1++]);
        } else {
            printf("%d ", arr2[head2++]);
        }
    }
    return 0;
}