#include <stdio.h>


int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, m; scanf("%d%d", &n, &m);
		int k; scanf("%d", &k);
		int a[n][m];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		int check = 0;
		for(int i = 1; i <= m; i++){
			if(check) break;
			if(i == k){
				for(int j = 1; j < n; j++){
					for(int m = j + 1; m <= n; m++){
						if(a[j][i] > a[m][i]){
							int temp = a[j][i];
							a[j][i] = a[m][i];
							a[m][i] = temp;
						}
					}
				}
				check = 1;
			}
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}