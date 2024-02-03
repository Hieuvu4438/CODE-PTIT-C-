#include <stdio.h>
#include <math.h>

int primeNumber(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return n>1;
} 

int check(int n){
	int rev = 0;
	int tmp;
	tmp = n;
	while(n > 0){
		rev = rev*10 + n%10;
		n/=10;
	}
	if(rev == tmp) return 1;
	return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int cnt = 0;
		int a,b; scanf("%d%d", &a, &b);
		if(a < b){
			for(int i = a; i <= b; i++){
			if(primeNumber(i) && check(i)){
				printf("%d ", i);
				++cnt;
				}
				if(cnt == 10){
					printf("\n");
					cnt = 0;
				}				
			}
		}
		else if(a > b){
			for(int i = b; i <= a; i++){
				if(primeNumber(i) && check(i)){
					printf("%d ", i);
					++cnt;
				}
				if(cnt == 10){
					printf("\n");
					cnt = 0;
				} 
			}
		}
		printf("\n");	
	}				
}

