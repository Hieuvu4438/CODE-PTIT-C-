#include <stdio.h>
#include <math.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		int dem = 0;
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				if(i % 2 == 0 && n/i % 2 == 0){
					dem+=2;
					n/=i;
				}
				if(i % 2 == 0 && n/i % 2 == 1){
					++dem;
					n/=i;
				}
			}
		}
		if(n!=1 && n % 2 == 0) ++dem;
		printf("%d\n", dem);
	}
}