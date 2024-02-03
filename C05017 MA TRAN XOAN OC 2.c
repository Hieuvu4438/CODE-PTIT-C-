#include <stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, m; scanf("%d%d", &n, &m);
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
		while(h1 <= h2 && c1 <= c2){
			for(int i = c1; i <= c2; i++){
				printf("%d ", a[h1][i]);
			}
			++h1;
			for(int i = h1; i <= h2; i++){
				printf("%d ", a[i][c2]);
			}
			--c2;
			if(c1 <= c2 && h1 <= h2){
				for(int i = c2; i >= c1; i--){
					printf("%d ", a[h2][i]);
				}
				--h2;
			}
			if(h1 <= h2 && c1 <= c2){
				for(int i = h2; i >= h1; i--){
					printf("%d ", a[i][c1]);
				}
				++c1;
			}
		}
		printf("\n");
	}
}
