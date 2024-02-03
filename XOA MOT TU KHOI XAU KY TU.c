#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int strcmp1(char a[], char b[]){
	int n1 = strlen(a);
	int n2 = strlen (b);
	if(n1 != n2) return 0;
	for(int i = 0; i < n1; i++){
		if(tolower(a[i]) != tolower(b[i]))
			return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	getchar();
	for(int i = 1; i <= t; i++){
		char c[1000], w[100];
		gets(c);
		scanf("%c", w);
		getchar ();
		char *token = strtok(c, " ");
		printf("#Test %d: ");
		while(token != NULL){
			if(strcmp1(token, w) == 0){
				printf("%s ", token);
			}
			token = strtok(NULL, " ");
		}
		printf("\n");
	}
}
