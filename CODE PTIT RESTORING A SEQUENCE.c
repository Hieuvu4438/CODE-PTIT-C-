#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int b[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                sum += b[i][j];
            }
        }
        for (int j = 0; j < n; j++) {
            if (i != j) {
                sum -= b[j][i];
            }
        }
        printf("%d ", sum / (n - 1));
    }
    printf("\n");
    return 0;
}
