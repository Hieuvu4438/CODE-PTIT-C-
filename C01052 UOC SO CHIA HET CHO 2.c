#include <stdio.h>
#include <math.h>


int main(){
	int t; scanf("%d", &t);
	while(t--){
		int dem = 0;
		long long n; scanf("%lld", &n);
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				if(i != n/i && i % 2 == 0) dem+= 2;
				if(i == n / i && i % 2 == 0) ++dem;
			}
		}
		if(n % 2 == 0) ++dem;
		printf("%d\n", dem);
	}
}