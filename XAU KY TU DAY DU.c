#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[1005];
    gets(s);
    int dem = 0;
    int max = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a')
        {
            dem++;
        }
        if (dem > 0)
        {
            if (s[i] - s[i - 1] == 1)
                dem++;
        }
        else
            dem = 0;
        if (max < dem)
            max = dem;
    }
    printf("%d", 26 - max);
}
