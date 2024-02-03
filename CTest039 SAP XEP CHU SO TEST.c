#include <stdio.h>

int main(){
	long long n; scanf("%d", &n);
	int m = 0;
	int a[m];
	while(n){
		long long rev = n % 10;
		a[m] = rev;
		++m;
		n/=10;
		
	}
	for(int i = 0; i < m; i++) printf("%d ", a[i]);
	
}