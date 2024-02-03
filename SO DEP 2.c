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
        int sum = 0;
        for(int i=0;i<=(dai-1)/2;i++){
            //printf("%c %c\n",xau[i],xau[dai-1-i]);
            if((int)xau[i]!=(int)xau[dai-1-i] || xau[dai - 1] != '8' || xau[0] != '8'){printf("NO\n"); dem=1; break;}
            sum = sum + (int)(xau[i] - '0');
        }
        if(dem==1) continue;
        if(sum % 10 != 0){
        	printf("NO\n");
		}
        else printf("YES\n");
    }
}
