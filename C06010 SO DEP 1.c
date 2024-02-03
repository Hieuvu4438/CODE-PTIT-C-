#include <stdio.h>
#include <string.h>

int is_beautiful_number(char a[], int n) {
    int l = 0, r = n - 1;
    while (l <= r) {
        if (a[l] != a[r]) return 0;
        else {
            ++l;
            --r;
        }
    }
    return 1;
}

int main() {
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[501];
    gets(c);

    int check = 0;

    for (int i = 0; i < strlen(c); i++) {
        while (i != strlen(c) - 1 && c[i] == ' ') {
            ++i;
        }
        if (i == strlen(c) - 1) {
            if (c[i] == '0' || c[i] == '2' || c[i] == '4' || c[i] == '6' || c[i] == '8') {
                check = 1;
            }
        }
    }

    if (check == 1 && is_beautiful_number(c, strlen(c))) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
	}
    
}

