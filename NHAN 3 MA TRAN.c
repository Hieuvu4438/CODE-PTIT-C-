#include <stdio.h>

int main(){
	int m, n, p ,q;
	scanf("%d%d%d%d", &m, &n, &p, &q);
	int a[m][n];
	int b[n][p];
	int c[p][q];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			scanf("%d", &b[i][j]);
		}
	}
	for(int i = 0; i < p; i++){
		for(int j = 0; j < q; j++){
			scanf("%d", &c[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			for(int k = 0; k < p; k++){
				cnt += a[i][j] * b[j][i];
				printf("%d ", cnt);
			}
		}
		printf("\n");
	}
}
