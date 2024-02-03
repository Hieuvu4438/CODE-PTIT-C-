#include <stdio.h>
int check(int n){
	int x = n % 10;
	while(n != 0){
		if(x < n % 10){
			return 0;
		}
		x = n % 10;
		x /= 10;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int a = pow(10, n - 1), b = pow(10, n);
		for(int i = a; i < b; i++){
			if(check(i)){
				printf("%d ", i);
			}
		}
		printf("\n");
	}
}
