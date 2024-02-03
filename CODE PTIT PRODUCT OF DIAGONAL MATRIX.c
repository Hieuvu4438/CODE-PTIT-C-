#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int w = 1; w <= t; w++){
		int n;
		scanf("%d", &n);
		int a[n][n], b[n][n], c[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < i+1; j++){
				a[i][j] = j + 1;
			}
			for(int j = i+1; j < n; j++){
				a[i][j] = 0;
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				b[i][j] = a[j][i];
				}
			}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				c[i][j] = 0;
				for(int k = 0; k < n; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
			
		}
		printf("Test %d:\n", w);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
}
