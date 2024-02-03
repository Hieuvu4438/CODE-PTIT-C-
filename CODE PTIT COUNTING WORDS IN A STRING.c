#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char c[1000];
	gets(c);
	int t;
	scanf("%d", &t);
	int cnt = 0;
	getchar();
	while(t--){
		char *token = strtok(c, " ");
		while(token != NULL){
			++cnt;
			token = strtok(NULL, " ");
		}
	}
	printf("%d", cnt);	
} 
