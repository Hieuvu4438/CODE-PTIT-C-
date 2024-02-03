#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void sapxep(int a[][100], int n){
	for(int i = 0; i < n; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(strcmp(a[j], a[min]) < 0) min = j;
		}
		char temp[1000];
		strcpy(temp, a[min]);
		strcpy(a[min], a[i]);
		strcpy(a[i], temp);
	}
}
int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int n = 0;
		int a[100][100];
		
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		sapxep(a, n);
		for(int i = 0; i < n; i++){
			printf("%s", a[i]);
		}
		printf("\n");
	}
}
