#include <stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int row1, row2;
	scanf("%d%d", &row1, &row2);
	--row1; --row2;
		for(int j = 0; j < m; j++){

			int temp = a[row1][j];
			a[row1][j] = a[row2][j];
			a[row2][j] = temp;
		}
	
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
