#include <stdio.h>
#include <math.h>

void thuaSo(int n) {
    for (int i = 2; i <= n; i++) {
        int cnt = 0;
        while (n % i == 0) {
            ++cnt;
            n /= i;
        }
        if (cnt > 0) {
            printf("%d^%d", i, cnt);
            if (n > 1) {
                printf(" * ");
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d = ", n);
        thuaSo(n);
        printf("\n");
    }

    return 0;
}
