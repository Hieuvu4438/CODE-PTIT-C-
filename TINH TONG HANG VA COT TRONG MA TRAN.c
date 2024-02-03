#include <stdio.h>

// Tinh tong theo hang:
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = 0; j < m; j++){
			sum += a[i][j];
		}
		printf("%d\n", sum);
	}
}

// Tinh tong theo cot:
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", a[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
		int sum = 0;
		for(int j = 0; j < n; j++){
			sum += a[i][j];
		}
		printf("%d\n", sum);
	}
}
