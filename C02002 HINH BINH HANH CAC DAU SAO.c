#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n-i; j++){
			printf("~");
		}
		for(int k = 1; k <= n; k++){
			printf("*");
		}
		printf("\n");
	}
}
