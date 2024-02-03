#include <stdio.h>

int min(int a, int b){
	if(a < b) return a;
	else return b;
}

int main(){
	int n, m; scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		int init = min(i, m);
		for(int j = 1; j <= m; j++){
			if(j <= m - i + 1) printf("%c",64 +  init + j - 1);
			else{
				if(m < i) printf("%c",64 +  init--);
				else printf("%c", --init + 64);
			}
			
		}
		printf("\n");
	}
}