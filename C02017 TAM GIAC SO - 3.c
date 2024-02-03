#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	int cnt = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= (2*i-1)/2+1; j++){
			printf("%d", cnt);
			cnt+=2;
		}
		cnt = cnt - 4;
		for(int k = (2*i-1)/2+2; k <= 2*i-1; k++){
			printf("%d", cnt);
			cnt -= 2;
		}
		cnt = 1;
		printf("\n");
	}
}
