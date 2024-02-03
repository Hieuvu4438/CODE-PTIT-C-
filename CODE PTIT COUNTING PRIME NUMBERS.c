#include <stdio.h>
#include <math.h>

int primeNumber(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int tach(int n){
	int cnt = 0;
	int dem = 0;
	while(n){
		int res = n % 10;
		n /= 10;
		++dem;
		if(primeNumber(res)) ++cnt;
	}
	if(cnt == dem) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d%d", &a, &b);
		if(a<b){
			int cnt = 0;
			for(int i = a; i <= b; i++){
				if(tach(i) && primeNumber(i)) ++cnt;
		}
		printf("%d\n", cnt);
		}
		if(a>b){
			int cnt = 0;
			for(int i = b; i <= a; i++){
				if(tach(i) && primeNumber(i)) ++cnt;
		}
		printf("%d\n", cnt);
		}
	}
}
