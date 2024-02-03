#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[1005];
        fgets(s, sizeof(s), stdin);
        int dem = 0;
        int dem1 = 0;
        for (int i = 5; i < strlen(s); i++)
        {
            if (s[6] == s[7] && s[6] == s[8] && s[10] == s[11])
                dem++;
            if (s[6] < s[7] && s[7] < s[8] && s[8] < s[10] && s[10] < s[11])
                dem++;
            if (s[i] == '6' || s[i] == '8')
                dem1++;
            if (dem1 == 5)
                dem++;
        }
        if (dem != 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
