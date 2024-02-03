#include <stdio.h>
#include <math.h>

int giaithua(long long n){
	int tich = 1;
	for(int i = 1; i <= n; i++){
		tich *= i;
	}
	return tich;
}

int checkStrong(long long n){
	int sum = 0;
	int res = n;
	while(n){
		sum += giaithua(n % 10);
		n/=10;
	}
	if(sum == res) return 1;
	else return 0;
}

int main(){
	long long a, b; scanf("%lld%lld", &a, &b);
	if(a <= b){
		for(int i = a; i <= b; i++){
			if(checkStrong(i)) printf("%d ", i);
		}
	}
	else{
		for(int i = b; i <= a; i++){
			if(checkStrong(i)) printf("%d ", i);
		}
	}
}