#include <stdio.h>
#include <math.h>

long long giaithua(long long n){
	long long tich = 1;
	for(int i = 1; i <= n; i++){
		tich *= i;
	}
	return tich;
}
int main(){
	long long n, k; scanf("%lld%lld", &n, &k);
	long long a = giaithua(n);
	long long b = (long long)pow(2,k);
	if(a % b == 0) printf("Yes");
	else printf("No");
}