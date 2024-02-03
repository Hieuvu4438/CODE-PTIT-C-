#include <stdio.h>

int is_prime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void count_prime_digits(long long n) {
    int digit_count[10] = {0};

    while (n > 0) {
        int digit = n % 10;
        if (is_prime(digit)) {
            digit_count[digit]++;
        }
        n /= 10;
    }


    for (int i = 2; i < 10; ++i) {
        if (digit_count[i] > 0) {
            printf("%d %d\n", i, digit_count[i]);
        }
    }
}

int main() {
    long long N;
    
    
    scanf("%lld", &N);

    count_prime_digits(N);

    return 0;
}
