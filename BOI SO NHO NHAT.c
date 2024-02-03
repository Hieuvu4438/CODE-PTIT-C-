#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int findSmallestMultiple(int n, int m) {
    int result = n;

    for (int i = n + 1; i <= m; i++) {
        result = lcm(result, i);
    }

    return result;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n, m;
        scanf("%d %d", &n, &m);

        int result = findSmallestMultiple(n, m);

        printf("%d\n", result);
    }

    return 0;
}
