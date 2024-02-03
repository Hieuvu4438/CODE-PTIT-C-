#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int cnt[256] = {0};
		for(int i = 0; i < strlen(c); i++){
			cnt[c[i]]++;
		}
		int res = 0;
		for(int i = 0; i < 256; i++){
			if(cnt[i] % 2 == 1) ++res;
		}
		if(res <= 1) printf("YES\n");
		else printf("NO\n");
	}
}
