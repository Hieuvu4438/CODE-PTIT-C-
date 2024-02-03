#include <stdio.h>

// Hoan vi 2 hang: 
//int main(){
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int a[n][m];
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < m; j++){
//			scanf("%d", &a[i][j]);
//		}
//	}
//	int x, y;
//	scanf("%d%d", &x, &y);
//	for(int i = 0; i < m; i++){
//		int tmp = a[x-1][i];
//		a[x-1][i] = a[y-1][i];
//		a[y-1][i] = tmp;
//	}
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < m; j++){
//			printf("%d ", a[i][j]);
//		}
//		printf("%d\n");
//	}
//}

// Hoan vi 2 cot:
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int x, y;
	scanf("%d%d", &x, &y);
	for(int i = 0; i < n; i++){
		int tmp = a[i][x-1];
		a[i][x-1] = a[i][y-1];
		a[i][y-1] = tmp;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", a[i][j]);
		}
		printf("%d\n");
	}
}


