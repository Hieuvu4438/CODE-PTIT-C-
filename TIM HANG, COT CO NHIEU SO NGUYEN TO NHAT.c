#include <stdio.h>
#include <math.h>

int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int res = 0,  hang;
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < m; j++){
			if(nt(a[i][j])){
				++cnt;
			}
		}
		if(cnt > res){
			res = cnt;
			hang = i;
		}
	}
	printf("%d\n", hang + 1);
	for(int i = 0; i < m; i++){
		if(nt(a[hang][i]))
			printf("%d ", a[hang][i]);
	}
}
