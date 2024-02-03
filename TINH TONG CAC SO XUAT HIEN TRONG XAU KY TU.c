#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Ki tu khong lap:
int main(){
	int t; scanf("%d", &t);
	while(t--){
		char c[100001];
		scanf("%s", c);
		int cnt[26] = {0};
		for(int i = 0; i < strlen(c); i++){
			cnt[c[i] - 'A']++;
		}
		for(int i = 0; i < 26; i++){
			if(cnt[i] == 1){
				printf("%c", (i + 'A'));
			}
		}
		printf("\n");
	}
}
