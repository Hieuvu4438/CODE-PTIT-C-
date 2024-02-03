#include <stdio.h>
#include <math.h>
int checknt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int checkFibo(int n){
	if(n == 0 || n == 1) return 1;
	int fn, f1 = 1, f2 = 0;
	for(int i = 2; i <= 92; i++){
		fn = f1 + f2;
		if(n == fn) return 1;
		f2 = f1;
		f1 = fn;
	}
	return 0;
}

int sum(int n){
	int res = n;
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
		
	}
	if(checkFibo(sum)) return 1;
	else return 0;
}

int main(){
	int a,b; scanf("%d%d", &a, &b);
	if(a <= b){
		for(int i = a; i <= b; i++){
			if(checknt(i) && sum(i)) printf("%d ", i);
		}
	}
	else{
		for(int i = b; i <= a; i++){
			if(checknt(i) && sum(i)) printf("%d ", i);
		}
	}
}