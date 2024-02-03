#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d\n", &t);
    for (int j = 0; j < t; j++)
    {
        char s[1005];
        gets(s);
        int k = 0,
            n = strlen(s),
            l, c;
        l = c = 0;
        for (int i = 0; i < n; i++)
            if (s[i] < '0' || s[i] > '9')
                k = 1;
        if (s[0] == '0' || k)
        {
            printf("INVALID\n");
            continue;
        }
        for (int i = 0; i < n; i++)
            if (s[i]%2) l++;
            else c++;
        if ((l > c && n % 2) || (c > l && !(n%2))) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
