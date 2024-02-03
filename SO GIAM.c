#include <stdio.h>

int isDecreasing(int n) {
    int prevDigit = n % 10;
    n /= 10;

    while (n > 0) {
        int currentDigit = n % 10;
        if (currentDigit >= prevDigit) {
            return 0; 
        }
        prevDigit = currentDigit;
        n /= 10;
    }

    return 1; 
}

int countDecreasingNumbers(int a, int b) {
    int count = 0;

    for (int i = a; i <= b; i++) {
        if (isDecreasing(i)) {
            count++;
        }
    }

    return count;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int result = countDecreasingNumbers(a, b);

        printf("%d\n", result);
    }

    return 0;
}
