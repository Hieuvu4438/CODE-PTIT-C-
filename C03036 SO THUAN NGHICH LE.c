#include <stdio.h>

int checktn(long long n){
	int res = n;
	int rev = 0;
	while(n){
		rev = rev * 10 + n % 10;
		n/=10;
	}
	if(rev == res) return 1;
	else return 0;
}

int checkle(long long n){
	while(n){
		int res =  n % 10;
		if(res % 2 == 0) return 0;
		n/=10;
	}
	return 1;
}

int sumle(long long n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n/=10;
	}
	if(sum % 2 == 1) return 1;
	else return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		if(checktn(n) && checkle(n) && sumle(n)) printf("YES\n");
		else printf("NO\n");
 	}
}