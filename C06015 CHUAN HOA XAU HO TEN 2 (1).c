#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char *my_strupr(char *s){
    for(int i = 0; i < strlen(s); i++){
        s[i] = toupper(s[i]);
    }
    return s;
}
void chuanhoa(char c[]){
	c[0] = toupper(c[0]);
	for(int i = 1; i < strlen(c); i++){
		c[i] = tolower(c[i]);
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
			strcpy(a[n], token);
			++n;
			token = strtok(NULL, " ");
		}
		for(int i = 0; i < n; i++){
			if(i == 0){
				*my_strupr(a[i]);
			}
			else{
				chuanhoa(a[i]);
			}
		}
		for(int i = 1; i < n; i++){
			printf("%s", a[i]);
			if(i != n - 1) printf(" ");
		}
		printf(",");
		printf(" %s", a[0]);
		printf("\n");
	}
}