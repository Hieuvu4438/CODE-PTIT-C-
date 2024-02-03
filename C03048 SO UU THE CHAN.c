#include <stdio.h>

int check(long long n){
	if(n % 2 == 1) return 0;
	int sum1 = 0, sum2 = 0;
	while(n){
		int rev = n % 10;
		if(rev % 2 == 0) ++sum1;
		else ++sum2;
		n/=10;
	}
	if(sum1 > sum2) return 1;
	else return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}