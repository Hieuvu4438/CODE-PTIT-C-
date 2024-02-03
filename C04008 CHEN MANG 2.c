#include <stdio.h>

int main(){
	int t; scanf("%d", &t);
	for(int l = 1; l <= t; l++){
		int n, m; scanf("%d%d", &n, &m);
		int k; scanf("%d", &k);
		int a[n], b[m];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < m; i++){
			scanf("%d", &b[i]);
		}
		int c[100000];
		for(int i = 0; i < k; i++){
			c[i] = a[i];
		}
		for(int i = k; i < m+k; i++){
			c[i] = b[i-k];
		}
		for(int i = m+k; i < n+m; i++){
			c[i] = a[i-m];
		}
		printf("Test %d:\n", l);
		for(int i = 0; i < m + n; i++){
			printf("%d ", c[i]);
		}
		printf("\n");
	}
	
}