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
		int dem = 0;
		for(int i = 0; i < strlen(c); i++){
			if(c[i] != ' '){
				++dem;
				while(i < strlen(c) && c[i] != ' '){
					++i;
				}
			}
		}
		printf("%d\n", dem);
	}
	
}
