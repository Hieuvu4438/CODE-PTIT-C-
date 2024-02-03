#include <stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		long long a[92];
		a[0] = 0, a[1] = 1;
		for(long long i = 2; i <= 92; i++){
			a[i] = a[i-1] + a[i-2];
			if(i == n){
				printf("%lld", a[i]);
				break;
			}
		}
		printf("\n");
	}
}