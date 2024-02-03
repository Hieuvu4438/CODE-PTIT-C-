#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];
    gets(s);
    int n = strlen(s),
        x = 0,
        y, kt,
        k[1005] = {0},
        d = 0;
    for (int i = 0; i < n-1; i++)
        if (s[i] == ' ')
        {
            for (int j = i; j < n; j++)
            {
                if (s[j] == ' ')
                {
                    kt = 1;
                    for (int z = x; z < i; z++)
                        if (s[z] != s[z-x+j+1])
                            kt = 0;
                    if (kt)
                    {
                        for (int z = x; z < i; z++)
                            k[z-x+j+1] = 1; 
                        if (s[i-x+j+1] == ' ')
                            k[i-x+j+1] = 1;
                    }
                }
            }
            x = i+1;
        }
    for (int i = 0; i < n; i++)
        if (!k[i])
        {
            printf("%c", s[i]);
        }
    return 0;
}
