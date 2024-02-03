#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
char* my_strlwr(char *s){
    for(int i = 0; i < strlen(s); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}
int main(){
	char c[1000];
	gets(c);
	char *token = strtok(c, " ");
	int n = 0;
	char a[100][50];
	int dem = 1;
	while(token!=NULL){
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}
	int check[100005];
	int dem1[100005];
	for(int i = 0; i < n; i++){
		my_strlwr(a[i]);
		check[i] = 1;
		dem1[i] = 1;
	}
	
	for(int i = 0; i < n; i++){
		if(check[i]){
			for(int j = i + 1; j < n; j++){
				if(strcmp(a[i], a[j]) == 0){
					++dem1[i];
					check[j] = 0;
				}
			}
		}
		
	}
	for(int i = 0; i < n; i++){
		if(check[i]){
			printf("%s %d\n", a[i], dem1[i]);
		}
	}
}	