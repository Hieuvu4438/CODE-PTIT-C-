#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char c[1000];
	gets(c);
	strlwr(c);
	char a[20][50];
	int n = 0;
	char *token = strtok(c," ");
	while(token != NULL){
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}
	int max = 0, idx;
	for(int i = 0; i < n; i++){
		int cnt = 1;
		for(int j = i + 1; j < n; j++){
			if(strcmp(a[i], a[j])==0){
				++cnt;
			}
		}
		if(cnt > max){
			max = cnt;
			idx = i;
		}
		else if(cnt == max){
			if(strcmp(a[idx], a[i]) > 0) idx = i;
		}
	}
	printf("%s %d", a[idx], max);
} 
