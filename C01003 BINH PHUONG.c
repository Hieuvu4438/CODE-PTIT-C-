#include <stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		printf("%lld\n", n * n);
	}
}