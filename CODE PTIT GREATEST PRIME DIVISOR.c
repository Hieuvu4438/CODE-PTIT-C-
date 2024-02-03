#include <stdio.h>
#include <math.h>

int primeNumber(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
} 

void greatestNumber(int n){
	int max = -1e9;
	int tmp, res;
	for(int i = 2; i <= n; i++){
		if(primeNumber(i) && n % i == 0){
			if(i > max){
				max = i;	
			}
		}
		
	}
	printf("%d\n", max);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		greatestNumber(n);
	}
}
