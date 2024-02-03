#include <stdio.h>

int main(){
	long long n; scanf("%lld", &n);
	int m = 0;
	int a[m];
	while(n){
		n %= 10;
		printf("%d\n", n);
		n /= 10;
	}
	
	for(int i = 0; i < m; i++) printf("%d ", a[i]);
}