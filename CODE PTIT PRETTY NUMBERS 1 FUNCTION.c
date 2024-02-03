#include <stdio.h>
int primeNumber(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int check(int n){
	if(n == 1 || n == 0)
		return 1;
	int n1 = 0, n2 = 1;
	for(int i = 3; i <= 94; i++){
		int a = n1 + n2;
		if(a == n) return 1;
		n2 = n1;
		n1 = a;
	}
	return 0;
} 

int sumDigit(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	if(check(sum) == 1) return 1;
	return 0;
}

int main(){
	int a, b; scanf("%d%d", &a, &b);
	if(a >= b){
		for(int i = b; i <= a; i++){
			if(sumDigit(i) && primeNumber(i)) printf("%d ", i);
		}
	}
	if(a < b){
		for(int i = a; i <= b; i++){
			if(sumDigit(i) && primeNumber(i)) printf("%d ", i);
		}
	}
}


