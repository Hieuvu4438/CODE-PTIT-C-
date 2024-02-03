#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int min(int a, int b){
	return a < b ? a : b;
}
int main(){
	int n, m; scanf("%d%d", &n, &m);
	for(int i = n; i >= 1; i--){
		int init = min(i,m);
		for(int j = 1; j <= m; j++){
			if(j <= m - i) printf("%c", (64+ init++));
			else printf("%c", 64 + init);
		}
		printf("\n");
	}
	
}
