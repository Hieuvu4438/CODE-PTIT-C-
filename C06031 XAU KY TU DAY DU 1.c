#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int check[256] = {0};
int main(){
	char c[1000];
	gets(c);
	int dem = 0;
	for(int i = 0; i < strlen(c); i++){
		check[c[0]] = 1;
		if(c[i] < c[i+1]){
			for(int j = i + 1; j < strlen(c); j++){
				if(c[j] > c[j+1]) check[j] = 1;
			}
		}
		else{
			
		}
	}
	for(int i = 0; i < 256; i++){
		if(check[i]) ++dem;
	}
	printf("%d\n", 26 - dem);
}