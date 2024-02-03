#include <stdio.h>

int main(){
	int t; scanf("%d", &t);
	for(int k = 1; k <= t; k++){
		int m,n; scanf("%d%d", &n, &m);
		int a[m][n];
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				scanf("%d", &a[i][j]);
			}
		}
		int max = 0;
		int idx = 0;
		for(int i = 0; i < m; i++){
			int sum = 0;
			for(int j = 0; j < n; j++){
				sum += a[i][j];
			}
			if(sum > max){
				max = sum;
				idx = i;
			}
		}
		int max1 = 0;
		int idx1 = 0;
		for(int i = 0; i < n; i++){
			int sum = 0;
			for(int j = 0; j < m; j++){
				if(j != idx){
					sum += a[j][i];
				}
			}
			if(sum > max1){
				max1 = sum;
				idx1 = i;
			}
		}
		printf("Test %d:\n", k);
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(i != idx && j != idx1) printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	
}