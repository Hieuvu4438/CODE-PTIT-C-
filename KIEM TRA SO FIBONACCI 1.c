#include<stdio.h>
#include<math.h>
#include<string.h>

int fibo(long long n){
	long long a = 5 * n * n - 4;
	long long b = 5 * n * n + 4;
	if(((double)sqrt(a) == (int)sqrt(a)) || ((double)sqrt(b) == (int)sqrt(b))) return 1;
	return 0;
}

int main(){
	long long n;
	scanf("%lld", &n);
	if(fibo(n) == 1) printf("1");
	else printf("0");
}
