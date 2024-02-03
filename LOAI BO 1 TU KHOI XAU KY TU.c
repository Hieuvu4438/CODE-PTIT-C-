#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// TH1: in tu cuoi cung va in ca dau cach dang sau no:

int main(){
	char c[1000];
	gets(c);
	char w[10];
	scanf("%s", w);
	char *token = strtok(c, " ");
	while(token != NULL){
		if(strcmp(token, w) != 0){
			printf("%s ", token);
		}
		token = strtok(NULL, " ");
	}
}

// TH2: loai bo dau cach o tu cuoi cung:
int main(){
	char c[1000];
	gets(c);
	char w[10];
	scanf("%s", w);
	char *token = strtok(c, " ");
	char a[20][50];
	int n = 0;
	while(token != NULL){
		if(strcmp(token, w) != 0){
			strcpy(a[n], token);
		}
		token = strtok(NULL, " ");
	}
	for(int i = 0; i < n; i++){
		printf("%s", a[i]);
		if(i!=n-1) printf(" ");
	}
}
