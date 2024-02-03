#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int n; scanf("%d", &n);
	char c;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 2*i+1; j++){
			if(i == 0 || j == 0 || j == 2*i){
				c = 64;
				printf("%c", c);
			}
			else if(j > 0 && j < (2*i+1) / 2 + 1){
				c+=2;
				printf("%c", c);
			}
			else{
				c-=2;
				printf("%c", c);
			}
			
		}
		printf("\n");
	}
}
