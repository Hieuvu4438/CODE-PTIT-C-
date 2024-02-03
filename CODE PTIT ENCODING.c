#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[10001];
		gets(c);
		int cnt=1;
		for(int i = 0; i < strlen(c); i++){
			if(c[i] == c[i+1]) ++cnt;
			else{
				printf("%c%d",c[i], cnt);
				cnt = 1;
			}		
		}
		printf("\n");
		
	}
}
