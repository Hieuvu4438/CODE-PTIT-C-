#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n][3];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		int so1 = 0;
		for(int j = 0; j < 3; j++){
			if(a[i][j] == 1) ++so1;
		}
		if(so1 > 1) ++cnt;
	}
	printf("%d", cnt);
}
