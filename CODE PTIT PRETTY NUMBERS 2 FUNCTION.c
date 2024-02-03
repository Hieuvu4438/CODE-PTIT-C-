#include <stdio.h>

long long luythua(long long n){
	long long tich=1;
	for(int i=1;i<=n;++i){
		tich*=10;
	}
	return tich;
}

int checkFibo(int n){
	int rev = 0;
	int m = n;
	while(n){
		rev = rev * 10 + n % 10;
		n/=10;
	}
	if(rev == m) return 1;
	return 0;
}

int sumDigit(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n/=10;
	}
	if(sum % 10 == 0) return 1;
	return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int cnt = 0;
		for(int i = luythua(n-1); i <= luythua(n) - 1; i++){
			if(sumDigit(i) && checkFibo(i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
}

