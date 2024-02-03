#include <stdio.h>
int check(long long n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n/=10;
	}
	return sum % 10;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		if(check(n)) printf("NO\n");
		else printf("YES\n");
	}
}