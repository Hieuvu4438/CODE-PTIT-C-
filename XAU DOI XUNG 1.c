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
            if((int)xau[i]!=(int)xau[dai-1-i]){dem++;}
        }
        if(dem==1) printf("YES\n");
        else if(dem==0 && dai%2==0) printf("NO\n");
        else if(dem==0 && dai%2==1) printf("YES\n");
		else printf("NO\n");
    }
}
