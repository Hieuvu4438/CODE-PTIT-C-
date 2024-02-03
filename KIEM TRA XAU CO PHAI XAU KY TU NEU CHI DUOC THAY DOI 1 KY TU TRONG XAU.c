#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int check(char c[]){
	int l = 0, r = strlen(c) - 1;
	int cnt = 0;
	while(l < r){
		if(c[l] != c[r]) ++cnt;
		++l;
		--r;
	}
	if(strlen(c) % 2 == 1 && cnt <= 1)
		return 1;
	if(strlen(c) % 2 == 0 && cnt == 1)
		return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[1005];
		scanf("%s", c);
		if(check(c)) printf("YES\n");
		else printf("NO\n");
	}
}
