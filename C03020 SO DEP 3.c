#include <stdio.h>
#include <math.h>
int checktn(int n){
	long long rev = n;
	long long res = 0;
	while(n){
		res = res * 10 + n % 10;
		n /= 10;
	}
	if(res == rev) return 1;
	else return 0;
}

int check6(int n){
	while(n){
		int rev = n % 10;
		if(rev == 6) return 1;
		n /= 10;
	}
	return 0;
}

int sum(int n){
	int cnt = 0;
	while(n){
		cnt += n % 10;
		n /= 10;
	}
	if(cnt >= 10){
		int cnt1 = cnt % 10;
		if(cnt1 % 8 == 0) return 1;
		else return 0;
	} 
	else{
		if(cnt % 8 == 0) return 1;
		else return 0;
	}
	
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = a; i <= b; i++){
		if(checktn(i) && sum(i) && check6(i)) printf("%d ", i);
	}
}