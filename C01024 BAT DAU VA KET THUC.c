#include <stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		int dau, cuoi;
		cuoi = n % 10;
		while(n){
			int rev = n % 10;
			n /= 10;
			dau = rev;
			
		}
		
		if(cuoi == dau) printf("YES\n");
		else printf("NO\n");
	}
}