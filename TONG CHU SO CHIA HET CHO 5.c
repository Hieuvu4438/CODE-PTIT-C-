#include <stdio.h>
#include <math.h>
int sum5(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n/=10;
	}
	if(sum % 5 == 0) return 1;
	return 0;
}

int primeNumber(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for(int i = 0; i <= n; i++){
		if(primeNumber(i) && sum5(i))
			printf("%d ", i);
	}
	printf("\n");
	for(int i = 0; i <= n; i++){
		if(primeNumber(i) && sum5(i))
			++cnt;
	}
	printf("%d", cnt);
}
