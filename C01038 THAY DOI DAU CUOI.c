#include <stdio.h>

int main(){
	long long n; scanf("%lld", &n);
	long long rev = 0;
	while(n){
		rev = rev * 10 + n % 10;
		n/=10;
	}
	printf("%lld", rev);
}