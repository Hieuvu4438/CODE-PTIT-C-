#include <stdio.h>
#include <math.h>
int checktn(long long n){
	long long rev = 0;
	long long res = n;
	while(n){
		rev = rev * 10 + n % 10;
		n/=10;
	}
	if(res == rev) return 1;
	else return 0;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		long long res = n;
		int cuoi = n % 10;
		int dem = 0;
		int dau;
		while(n){
			dau = n % 10;
			n/=10;
			++dem;
			
		}
		int b = dau / cuoi;
		int c = cuoi / dau;
		if((b == 2 && dau % cuoi == 0) || (c == 2 && cuoi % dau == 0)){
			long long a = (res - dau * pow(10, dem-1))/10;
			if(checktn(a)) printf("YES\n");
			else printf("NO\n");
			
		}
		else printf("NO\n");
	}
}