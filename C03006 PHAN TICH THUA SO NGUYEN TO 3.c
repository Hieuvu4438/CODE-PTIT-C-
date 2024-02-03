#include <stdio.h>
#include <math.h>
int main(){
	int t; scanf("%d", &t);
	for(int m = 1; m <= t; m++){
		int n; scanf("%d", &n);
		printf("Test %d: ", m);
		for(int i = 2; i <= sqrt(n); i++){
			int cnt = 0;
			if(n % i == 0){
				while(n % i == 0){
					++cnt;
					n/=i;
				}
				printf("%d(%d)",i, cnt);
				if(n != 1) printf(" ");
			}
		}
		if(n != 1) printf("%d(1)", n);
		printf("\n");
	}
}
