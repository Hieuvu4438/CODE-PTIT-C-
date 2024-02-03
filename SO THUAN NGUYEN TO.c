#include <stdio.h>
#include <math.h>

int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int sum(int n){
	int tong = 0;
	while(n){
		tong += n % 10;
		n/=10;
	}
	if(nt(tong)) return 1;
	return 0;
}

int tach(int n){
	while(n){
		int temp = n % 10;
		if(nt(temp) != 1) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		if(a < b){
			int cnt = 0;
			for(int i = a; i <= b; i++){
				if(nt(i) && sum(i) && tach(i)) ++cnt;
			}
			printf("%d\n", cnt);
		}
		if(a>=b){
			int cnt = 0;
			for(int i = b; i <= a; i++){
				if(nt(i) && sum(i) && tach(i)) ++cnt;
			}
			printf("%d\n", cnt);
		}
	}
}
