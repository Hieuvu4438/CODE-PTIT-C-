#include <stdio.h>
#include <math.h>

int main(){
	int t; scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n, m; scanf("%d%d", &n, &m);
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		int max = 0;
		int sum = 0;
		int idx = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				sum += a[i][j];
			}
			if(max < sum){
				max = sum;
				idx = i;
			}
		}
		
		int max1 = 0;
		int sum1 = 0;
		int idx1 = 0;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(j != idx){
					sum1 += a[j][i];
				}
				
			}
			if(max1 < sum1){
				max1 = sum1;
				idx1 = i;
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m ; j++){
				if(i != idx && j != idx1) printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}