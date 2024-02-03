#include <stdio.h>

int check(int n){
	while(n){
		int so1 = n % 10;
		n /= 10;
		int so2 = n % 10;
		if(so1 < so2) return 0;
	}
	return 1;
}


int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a = pow(10, n-1);
		int b = pow(10, n);
		for(int i = a; i <= b; i++){
			if(check(i)) printf("%d ", i);
		}
		printf("\n");
	}
}