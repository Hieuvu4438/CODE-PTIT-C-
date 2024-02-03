#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        char s[1005];
        gets(s);
        int kt = 0,
            n = strlen(s),
            a[500] = {0};
        for (int i = 0; i < n; i++)
            if (s[i] < '0' || s[i] > '9')
                kt = 1;
        if (s[0] == '0' || kt)
        {
            printf("INVALID\n");
            continue;
        }
        for (int i = 0; i < n; i++)
            if (!a[s[i]])
            {
                a[s[i]] = 1;
                kt++;
            }
        if (kt == 10) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
