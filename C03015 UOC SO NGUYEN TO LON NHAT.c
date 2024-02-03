#include <stdio.h>
#include <math.h>

int max(int a, int b){
	if(a < b) return b;
	else return a;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long max1 = -1e9;
		long long n; scanf("%lld", &n);
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				max1 = max(max1, i);
				while(n % i == 0){
					n /= i;
				}
			}
		}
		if(n != 1) printf("%lld\n", n);
		else printf("%lld\n", max1);
	}
}