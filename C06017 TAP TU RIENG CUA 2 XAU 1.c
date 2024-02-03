#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void sapxep(int a[][100], int n){
	for(int i = 0; i < n; i++){
		int m = i;
		for(int j = i + 1; j < n; j++){
			if(strcmp(a[j], a[m]) < 0) m = j;
		}
		char tmp[100];
		strcpy(tmp, a[m]);
		strcpy(a[m], a[i]);
		strcpy(a[i], tmp);
	}
} 
int main(){
	char c1[1000];
	gets(c1);
	char c2[1000];
	gets(c2);
	int n1 = 0, n2 = 0;
	int a1[100][100], a2[100][100];
	char *token1 = strtok(c1, " ");
	while(token1 != NULL){
		strcpy(a1[n1], token1);
		++n1;
		token1 = strtok(NULL, " ");
	}
	char *token2 = strtok(c2, " ");
	while(token2 != NULL){
		strcpy(a2[n2], token2);
		++n2;
		token2 = strtok(NULL, " ");
	}
	sapxep(a1, n1);
	sapxep(a2, n2);
	for(int i = 0; i < n1; i++){
		int dem = 1;
		int check = 1;
		for(int j = 0;  j < n2; j++){
			if(strcmp(a1[i], a2[j]) == 0) dem = 0;
		}
		for(int j = 0; j < i; j++){
			if(strcmp(a1[i], a1[j]) == 0) check = 0;
		}
		if(check == 1 && dem == 1){
			printf("%s ", a1[i]);
		}
	}
}
