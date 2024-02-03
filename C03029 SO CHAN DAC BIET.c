#include <stdio.h>

int checkchan(long long n){
	if(n % 2 == 1) return 0;
	while(n){
		int res = n % 10;
		if(res % 2 == 1) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		if(checkchan(n)) printf("YES\n");
		else printf("NO\n");
	}
}