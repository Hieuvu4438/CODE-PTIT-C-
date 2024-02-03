#include <stdio.h>
#include <math.h>

int prime[1000001];

void sieve(){
		for(int i = 0; i <= 1000000; i++){
			prime[i] = 1;
		}
		prime[1] = prime [0] = 0;
		for(int i = 2; i<=1000; i++){
			if(prime[i]){
				for(int j=i*i; j <= 1000000; j+=i){
					prime[j] = 0;
				}
			}
		}
} 
int main(){
	int n;
	scanf("%d", &n);
	sieve();
	for(int i = 2; i < n; i++){
		if(prime[i]){
			printf("%d\n", i);
		}
	}
	return 0;
}


