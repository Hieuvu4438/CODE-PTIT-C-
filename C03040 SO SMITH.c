#include <stdio.h>
#include <math.h>
int sum123(long long n){
	int tong = 0;
	while(n){
		tong += n % 10;
		n /= 10;
	}
	return tong;
}
int main(){
	long long n; scanf("%lld", &n);
	int sum = 0;
	int sum1 = sum123(n);

	for(int i = 2; i <= n / 2; i++){
		if(n % i == 0){
			while(n % i == 0){
				sum += i;
				n /= i;
			}
		}
	}
	if(n != 1) sum += n;

	if(sum1 == sum) printf("YES");
	else printf("NO");
}