#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char c[1000];
    gets(c);

    int len = strlen(c) / 2;
    int len1 = strlen(c) - len;

    while (len != 0) {
        int cnt = 0;

        for (int i = 0; i < len; i++) {
            int rev = (c[i] - '0') * pow(10, len - i - 1);
            cnt += rev;
        }

        int cnt1 = 0;

        for (int i = len; i < len + len1; i++) {
            int rev = (c[i] - '0') * pow(10, len + len1 - i - 1);
            cnt1 += rev;
        }

        printf("%d\n", cnt + cnt1);
        len = len / 2;
        len1 = strlen(c) - len;
    }

    return 0;
}

