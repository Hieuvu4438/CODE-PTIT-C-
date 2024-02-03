#include <stdio.h>

int checktn(int n){
	int rev = 0;
	int res = n;
	while(n){
		rev = rev * 10 + n % 10;
		n/=10;
	}
	if(rev == res) return 1;
	else return 0;
}

int sum(int n){
	int tong = 0;
	while(n){
		tong += n % 10;
		n /= 10;
	}
	if(tong % 10 == 0) return 1;
	else return 0;
}

int check4(int n){
	while(n){
		int rev = n % 10;
		if(rev == 4) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a = pow(10, n - 1);
		int b = pow(10, n);
		for(int i = a; i <= b; i++){
			if(check4(i) && sum(i) && checktn(i)) printf("%d ", i);
		}
		printf("\n");
	}
}