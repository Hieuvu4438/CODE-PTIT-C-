#include <stdio.h>
int thuanNghich(long long n){
	long long res = 0;
	long long m = n;
	while(n){
		res = res * 10 + n % 10;
		n/=10;
	}
	if(res == m) return 1;
	else return 0;
}
int chusoLe(long long n){
	int demle = 0;
	int cnt = 0;
	while(n){
		int temp = n % 10;
		if(temp % 2 == 1) ++demle;
		++cnt;
		n/=10;
	}
	if(cnt == demle) return 1;
	else return 0;
}
int sum(long long n){
	long long tong = 0;
	while(n){
		tong += n % 10;
		n/=10;
	}
	if(tong % 2 == 1) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(thuanNghich(n) && chusoLe(n) && sum(n)) printf("YES\n");
		else printf("NO\n");
	}
}
