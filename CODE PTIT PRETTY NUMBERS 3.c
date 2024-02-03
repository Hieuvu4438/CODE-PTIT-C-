#include <stdio.h>

long long checkPalindromic(long long n){
	long long rev = 0;
	long long m = n;
	while(n){
		rev = rev*10 + n%10;
		n/=10;
	}
	if(rev == m) return 1;
	return 0;
}

int check6(long long n){
	int cnt = 0;
	while(n){
		int temp = n % 10;
		if(temp == 6) return 1;
		n /= 10;
	}
	return 0;
}

int sumDigit(long long n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	if(sum < 10){
		if(sum == 8) 
			return 1;
	}
	else if(sum >= 10){
		int temp = sum % 10;
		if(temp == 8) return 1;
	}
	return 0;
}

int main(){
	int a, b; scanf("%d%d", &a, &b);
	if(a < b){
		for(int i = a; i <= b; i++){
			if(checkPalindromic(i) && check6(i) && sumDigit(i)) 
				printf("%d ",i);
		}
	}
	if(a >= b){
		for(int i = b; i <= a; i++){
			if(checkPalindromic(i) && check6(i) && sumDigit(i)) 
				printf("%d ",i);
		}
	}
}
