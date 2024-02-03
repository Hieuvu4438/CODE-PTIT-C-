#include <stdio.h>

int main(){
	long long n; scanf("%lld", &n);
	long long tich = 1;
	while(n){
		
		tich *= n % 10;
		n/=10;
	}
	printf("%lld", tich);
}