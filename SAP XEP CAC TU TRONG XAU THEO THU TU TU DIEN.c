#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void sx(char a[][50], int n){
	for(int i = 0; i < n; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(strcmp(a[j], a[min]) < 0) min = j;
		}
		char tmp[100];
		strcpy(tmp, a[min]);
		strcpy(a[min], a[i]);
		strcpy(a[i], tmp);
		// CACH 1: Sap xep tu theo thu tu tu dien
	}
} 

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	if(strcmp(x,y) < 0) return -1;
	else return 1;
}
// CACH 2: Sap xep thu tu tu dien

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		char a[20][50];
		int n = 0; // dem so luong tu trong cau
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy(a[n], token);
			++n;
			token = strtok(NULL, " ");
		}
		qsort(a, n, sizeof(a[0]), cmp);
		for(int i = 0; i < n; i++){
			printf("%s ", a[i]);
		}
		printf("\n");
	}
}
