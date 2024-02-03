#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int t; scanf("%d", &t);
	getchar();
	for(int i = 1; i <= t; i++){
		char c[1000];
		gets(c);
		char a[100][100];
		int n = 0;
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy (a[n++], token);
			token = strtok(NULL, " ");
		}
		int res = 0;
		for(int i = 0; i < n; i++){
			int ok = 0;
			for(int j = 0; j < i; j++){
				if(strcmp(a[i], a[j]) == 0){
					ok = 1; break;
				}
			}
			if(ok){
				printf("%s\n", a[i]);
				res = 1;
				break;
			}
		}
		if(!res) printf("-1\n");
	}
}
