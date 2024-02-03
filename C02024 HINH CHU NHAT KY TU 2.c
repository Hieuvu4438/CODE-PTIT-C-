#include <stdio.h>
int min(int a, int b){
	if(a < b) return a;
	else return b;
}
int main(){
	int n, m; 
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		int init = min(i, m);
		for(int j = 1; j <= m; j++){
			if(j <= m - i + 1) printf("%d", j + i - 1);
			else{
				printf("%d", init);
				--init;
		}
		printf("\n");
	}
}
