#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		char c[100001];
		scanf("%s", c);
		int sum = 0; 
		int res = 0;
		for(int i = 0; i < strlen(c); i++){
			if(isdigit(c[i])){
				res = res*10 + c[i] - '0';
			}
			else{
				sum += res;
				res = 0;
			}
		}
		if(isdigit(c[strlen(c) - 1])) sum += res;
		printf("%d\n", sum);
	}
}
