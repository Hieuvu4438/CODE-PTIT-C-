#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    if (b == 0) {
        printf("0");
    } else {
        float chia = (float)a / b;
        printf("%d %d %d %.2f %d", a + b, a - b, a * b, chia, a % b);
    }

    return 0;
}
