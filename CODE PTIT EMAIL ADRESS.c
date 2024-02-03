#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char c[1000];
	gets(c);
	strlwr(c);
	char a[10][100];
	int n = 0;
	char *token = strtok(c, " ");
	while(token != NULL){
		strcpy(a[n++], token);
		token = strtok(NULL, " "); 
	}
	for(int i = 0; i < n-1; i++){
		printf("%c", a[i][0]);
	}
		printf("%s@ptit.edu.vn", a[n-1]);	
}
