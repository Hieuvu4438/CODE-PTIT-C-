#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int init = i;
		for(int j = 1; j <= i; j++){
			printf("%d ", init);
			init += n - j; 
		}
		printf("\n");
	}
}
