#include <stdio.h>
#include <math.h>

int main(){
	int t; scanf("%d", &t);
	for(int k = 1; k <= t; k++){
		int n; scanf("%d", &n);
		int a[n][n];
		for(int i = 0; i < n; i++){
			int cnt = 1;
			for(int j = i + 1; j < n; j++){
				a[i][j] = 0;
			}
			for(int j = 0; j <= i; j++){
				a[i][j] = cnt++;
			}
		}
		int b[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				b[i][j] = a[j][i];
			}
		}
	
		int c[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				c[i][j] = 0;
				for(int k = 0; k < n; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
			
		}
		printf("Test %d:\n", k);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
}