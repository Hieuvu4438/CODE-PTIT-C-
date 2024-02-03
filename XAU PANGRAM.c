#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int pangram(char c[]){
	int cnt[26] = {0};
	for(int i = 0; i < strlen(c); i++){
		cnt[c[i] - 'a'] = 1;
	}
	for(int i = 0; i < 26; i++){
		if(cnt[i] == 0)
			return 0;
	}
	return 1;
}

int main(){
	char c1[1000], c2[1000];
	scanf("%s", c1);
	if(pangram(c1)) printf("YES\n");
	else printf("NO\n");
}
