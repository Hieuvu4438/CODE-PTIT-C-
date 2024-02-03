#include <stdio.h>
#include <math.h>
int checktn(long long n){
	long long rev = n;
	long long res = 0;
	while(n){
		res = res * 10 + n % 10;
		n /= 10;
	}
	if(res == rev) return 1;
	else return 0;
}

int sum(long long n){
	int cnt = 0;
	while(n){
		cnt += n % 10;
		n /= 10;
	}
	if(cnt % 10 == 0) return 1;
	else return 0;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		int a = pow(10, n - 1);
		int b = pow(10, n);
		int dem = 0;
		for(int i = a; i < b; i++){
			if(sum(i) && checktn(i)) ++dem;
		}
		printf("%d\n", dem);
	}
}