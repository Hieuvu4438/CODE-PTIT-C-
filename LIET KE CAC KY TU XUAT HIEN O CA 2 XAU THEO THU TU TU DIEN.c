#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char c1[1000], c2[1000];
	gets(c1);
	gets(c2);
	int cnt[256]={0};
	for(int i = 0;  i < strlen(c1); i++){
		cnt[c1[i]] = 1;
	}
	for(int i = 0; i < strlen(c2); i++){
		if(cnt[c2[i]]){
			cnt[c2[i]] = 2;
		}
	}
	for(int i = 0; i < 256; i++){
		if(cnt[i] == 2){
			printf("%c", i);
		}
	}
}
