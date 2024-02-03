#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int dem[1000005];
int main(){
	char c1[1000];
	gets(c1);
	char c2[100];
	scanf("%s", c2);
	char *token = strtok(c1, " ");
	int n = 0;
	char a[50][100];
	while(token != NULL){
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}
	for(int i = 0; i < n; i++){
		if(strcmp(a[i], c2) != 0) printf("%s ", a[i]);
	}

	
}
