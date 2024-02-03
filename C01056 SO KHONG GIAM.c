#include <stdio.h>
#include <math.h>

int check(long long n){
	while(n){
		int so1 = n % 10;
		n/=10;
		int so2 = n % 10;
		if(so1 < so2) return 0;

	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}