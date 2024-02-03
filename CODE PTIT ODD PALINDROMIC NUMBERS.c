#include <stdio.h>
#include <math.h>

int checkPalindromic(long long n){
	int rev = 0;
	int m = n;
	while(n){
		rev = rev*10 + n%10;
		n/=10;
	}
	if(rev == m) return 1;
	return 0;
}

int tach(long long n){
	int le = 0;
	int cnt = 0;
	int tmp;
	while(n){
		tmp = n%10;
		if(tmp % 2 == 1) ++le;
		++cnt;
		n/=10;
	}
	if(cnt == le) return 1;
	return 0;
	
}

int sum(long long n){
	long long sum = 0;
	long long tmp;
	while(n){
		sum += n % 10;
		n/=10;
	}
	if(sum % 2 == 1) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(checkPalindromic(n) && tach(n) && sum(n))
			printf("YES\n");
		else printf("NO\n");
	}
}
