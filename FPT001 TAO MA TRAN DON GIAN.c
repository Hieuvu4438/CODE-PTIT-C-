#include <stdio.h>

int main(){
	int n; 
	scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < i; j++){
			a[i][j] = 0;
		}
		for(int k = i; k < n; k++){
			a[i][k] = cnt;
			++cnt;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
