#include <stdio.h>

int thuasont(int n){
	int sum = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				sum += i;
			n /= i;
			}	
		}
	}
	if(n > 1){
		sum += n;
	}
	return sum;
}


int main(){
	int t;
	scanf("%d", &t);
	int tong = 0;
	while(t--){
		int n;
		scanf("%d", &n);
		tong += thuasont(n);
	}
	printf("%d\n", tong);
}
