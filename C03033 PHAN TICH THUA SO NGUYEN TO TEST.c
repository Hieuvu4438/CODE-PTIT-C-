#include <stdio.h>
#include <math.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		printf("%lld = ", n);
		for(int i = 2; i <= n; i++){
			int dem = 0;
			if(n % i == 0){
				while(n % i){
					++dem;
					n /= i;
				}
				printf("%d^%d", i, dem);
				if(n != 1) printf(" * ");
			}
		}
		if(n != 1) printf("%d^1", n);
		printf("\n");
	}
}