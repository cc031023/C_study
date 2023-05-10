// 法一.
int NumberOf1(int n) {
    unsigned int x = n;
    int cnt = 0;
    while (x != 0) {
        cnt += x & 1;
        x >>= 1;
    }

    return cnt;
}

// 法二.
int NumberOf1(int n) {
    int cnt = 0;
    unsigned int x = n;
    while (x != 0) {
        ++cnt;
        x -= x & -x;
    }
    return cnt;
}

// 法三.
int NumberOf1(int n) {
    int cnt = 0;
    while (n != 0) {
        ++cnt;
        n &= (n - 1);  // 等价于n -= n & -n.
    }
    return cnt;
}