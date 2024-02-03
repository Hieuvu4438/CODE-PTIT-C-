#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	int cnt = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n - i; j++){
			printf("~");
		}
		for(int k = 1; k <= (2*i-1)/2+1; k++){
			printf("%d", cnt);
			cnt += 2;
		}
		cnt -= 4;
		for(int m = (2*i-1)/2+2; m <= 2*i-1; m++){
			printf("%d", cnt);
			cnt -= 2;
		}
		cnt = 1;
		printf("\n");
	}
}
