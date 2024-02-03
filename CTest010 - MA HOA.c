#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
	gets(c);
	int dem = 1;
	for(int i = 0; i < strlen(c); i++){
		if(c[i] == c[i+1]){
			++dem;
		}
		else{
			printf("%c%d", c[i], dem);
			dem = 1;
		}
		
		}
		printf("\n");
	}
	
}
