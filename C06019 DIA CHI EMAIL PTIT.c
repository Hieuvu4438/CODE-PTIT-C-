#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[1000];
	gets(c);
	int n = 0;
	int a[100][100];
	char *token = strtok(c, " ");
	while(token != NULL){
		strcpy(a[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	
	for(int i = 0; i < n; i++){
		strlwr(a[i]);
		if(i != n - 1){
			printf("%c", a[i][0]);
		}
		else printf("%s@ptit.edu.vn", a[i]);
	}
}

