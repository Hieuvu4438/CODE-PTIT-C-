#include <stdio.h>

void primeFactorization(int testNumber, int n) {
    printf("Test %d: %d: ", testNumber, n);

    for (int i = 2; i <= n; i++) {
        int count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count > 0) {
            printf("%d(%d) ", i, count);
        }
    }

    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);

    for (int testNumber = 1; testNumber <= T; testNumber++) {
        int n;
        scanf("%d", &n);

        primeFactorization(testNumber, n);
    }

    return 0;
}
