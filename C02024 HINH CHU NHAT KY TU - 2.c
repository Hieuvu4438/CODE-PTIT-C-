#include <stdio.h>

int min(int a, int b){
	return a < b ? a : b;
}
int main(){
	int n, m; scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		int init = min(i, m - 1);
		for(int j = 1; j <= m; j++){
			if(j <= m - i + 1) printf("%d", init + j - 1);
			else{
				--init;
				printf("%d", init--);
			}
		}
		printf("\n");
	}
}
