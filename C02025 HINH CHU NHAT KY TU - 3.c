#include <stdio.h>
int min(int a, int b){
	return a < b ? a : b;
}
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		int init = min(i, m);
		for(int j = 1; j <= m; j++){
			if(j <= m - i) printf("%c", 63 + init++);
			else printf("%c", 63 + init);
		}
		printf("\n");	
	}
}
