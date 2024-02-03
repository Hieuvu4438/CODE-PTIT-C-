#include <stdio.h>
#include <math.h>

int evenNumber(long long n){
	int cnt = 0;
	while(n){
		int res = n % 10;
		n /= 10;
		if(res % 2 == 1) ++cnt;
	}
	if(cnt > 0) return 0;
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(evenNumber(n) && (n%2==0)) printf("YES\n");
		else printf("NO\n");
	}
}
