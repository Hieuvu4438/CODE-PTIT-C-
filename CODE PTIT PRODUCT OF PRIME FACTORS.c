#include <stdio.h>
#include <math.h>
int primeNumber(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
int primeFactorNumber(int n){
	int tich = 1;
	for(int i = 2; i <= sqrt(n); i++){
		int cnt = 0;
		if(primeNumber(i)){
			while(n % i == 0){
				++cnt;
				while(cnt == 1){
					tich *= i;
					n /= i;
					++cnt;
			}	
		}
	}		
}
	if(n > 1){
		tich *= n;
	}
	return tich;
}
int main(){
	int a;
	scanf("%d", &a);
	for(int i = 2; i <= sqrt(a); i++){
		printf("%d ", primeFactorNumber(a));
	}
	return 0;	
}
