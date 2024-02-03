#include <stdio.h>
#include <math.h>

int main(){
	long long n,x;
	scanf("%lld", &n);
	long long a[92];
	a[0]=0;
	a[1]=1;
	for(int i = 2; i <= 92; i++){
		a[i] = a[i-1] + a[i-2];
	}
	for(int i = 0; i < n; i++){
		scanf("%lld", &x);
		printf("%lld\n", a[x]);
	}
}
