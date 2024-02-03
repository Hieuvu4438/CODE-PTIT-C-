#include <stdio.h>
#include <math.h>

int max(int a, int b) {
    return (a < b) ? b : a;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int k = 1; k <= t; k++) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int dem = 1;
        int cnt[100000];
        int max1 = 1;
        printf("Test %d:\n", k);

        for (int i = 0; i < n - 1; i++) {
            if (a[i] < a[i + 1]) {
                ++dem;
                max1 = max(max1, dem);
            } else {
                dem = 1;
            }
        }

        printf("%d\n", max1);

        if (max1 == 1) {
            for (int i = 0; i < n; i++) {
                printf("%d\n", a[i]);
            }
        } else {
            int dem1 = 1;
            int check = 0;

            for (int i = 0; i < n - 1; i++) {
                if (a[i] < a[i + 1]) {
                    ++dem1;
                } else {
                    dem1 = 1;
                }

                if (dem1 == max1) {
                    check = 1;
                    for (int j = i - dem1 + 2; j <= i + 1; j++) {
                        printf("%d ", a[j]);
                    }
                    dem1 = 1;
                }

                if (check && dem1 != max1) {
                    printf("\n");
                    check = 0;
                }
            }

            if (check) {
                printf("\n");
            }
        }
    }

    return 0;
}
