#include <stdio.h>

int main(){
	long long n; scanf("%lld", &n);
	int dem = 0;
	while(n){
		int rev =  n % 10;
		++dem;
		n/=10;
	}
	printf("%d", dem);
}