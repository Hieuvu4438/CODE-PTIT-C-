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
	int check = 1;
	for(int i = 0; i < strlen(c); i++){
		if(c[i] != '2' && c[i] != '1' && c[i] != '0') check = 0;
	}
	if(check){
		printf("YES\n");
	}
	else printf("NO\n");
	}
	
} 
