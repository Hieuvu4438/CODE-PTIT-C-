#include <stdio.h>
#include <math.h>


// CACH 1: 
//int prime(int n){
//	for(int i=2; i<=sqrt(n); i++){
//		if(n%i==0)
//			return 0;
//	}
//	return n>1;
//}
//int digitPrime(int n){
//	while(n){
//		int r = n % 10;
//		if (r!=2 && r!=3 && r!=5 && r!=7)
//			return 0;
//		n /= 10;					
//	}
//	return 1;
//}
//int main(){
//	int t;
//	scanf("%d", &t);
//	while (t--){
//		int a, b;
//		scanf("%d%d", &a, &b);
//		int cnt = 0;
//		for(int i = a; i <= b; i++){
//			if(digitPrime(i) && prime(i))
//				++cnt;
//		}
//		printf("%d\n", cnt);
//	}
//}

// CACH 2:
int prime[1000001];
void sieve(){
	for(int i = 0; i <= 1000000; i++)
		prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(prime[i]){
			for(int j = i*i; j <= 1000000; j+=i)
				prime[j]=0;
		}
	}	
}

int digitPrime(int n){
	while(n){
		int r = n % 10;
		if(r!=2 && r!=3 && r!=5 && r!=7)
			return 0;
		n/=10;
	}
	return 1;
}

int main (){
	int t;
	sieve();
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int cnt = 0;
		for (int i=a; i <= b; i++){
			if(prime[i] && digitPrime(i))
				++cnt;
		}
		printf("%d\n", cnt);
	}
}
