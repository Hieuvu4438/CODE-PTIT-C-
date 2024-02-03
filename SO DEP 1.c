#include <stdio.h>
#include <string.h>
char xau[100001];

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",xau);
        int dem=0;
        int dai=strlen(xau);
        for(int i=0;i<=(dai-1)/2;i++){
            //printf("%c %c\n",xau[i],xau[dai-1-i]);
            if((int)xau[i]!=(int)xau[dai-1-i] || (int)(xau[i]-'0') % 2 != 0){printf("NO\n"); dem=1; break;}
        }
        if(dem==1) continue;
        printf("YES\n");
    }
}
