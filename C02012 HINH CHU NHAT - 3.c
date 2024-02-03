#include <stdio.h>

int main(){
	int n, m; scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		int init = i;
		for(int j = 1; j <= m; j++){
			if(j < i) printf("%d", init--);
			else printf("%d", init++);
		}
		printf("\n");
	}
}
