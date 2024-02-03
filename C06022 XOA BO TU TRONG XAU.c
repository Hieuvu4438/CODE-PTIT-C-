#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int check[100005] = {1};
int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		char b[1000];
		gets(b);
		strlwr(b);
		printf("%s\n", b);
		int a[100][100];
		int n = 0;
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		int d[100];
		for(int i = 0; i < n; i++){
			d[i] = strlwr(a[i]);
			printf("%s\n", d[i]);
		}
		for(int i = 0; i < n; i++){
			if(strcmp(d[i], b) == 0) check[i] = 0;
		}
		for(int i = 0; i < n; i++){
			if(check[i]) printf("%s ", a[i]);
		}
		printf("\n");
	}
}