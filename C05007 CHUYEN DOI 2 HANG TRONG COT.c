#include <stdio.h>
#include <math.h>

int main(){
	int m, n; scanf("%d%d", &m, &n);
	int a[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int h1, h2; scanf("%d%d", &h1, &h2);
	--h1;
	--h2;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(j == h1){
				int temp = a[i][h1];
				a[i][h1] = a[i][h2];
				a[i][h2] = temp;
			}
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}