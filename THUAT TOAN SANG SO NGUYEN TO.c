#include <stdio.h>
#include <math.h>
// CACH 1
//int nt(int n){
//	for(int i = 2; i <= sqrt(n); i++){
//		if(n % i == 0)
//			return 0;
//	}
//	return n > 1;
//}
//int main (){
//	int n;
//	scanf("%d", &n);
//	for(int i = 0; i <= n; i++){
//		if(nt(i)) printf("%d ", i);
//		
//	}	
//	return 0;
//}


// CACH 2: SANG SO NGUYEN TO Eratosthenes
// Neu muon sang cac so nguyen to khong vuot qua n
// Phai tao duoc 1 mang co kich thuoc n + 1 phan tu
int prime[1000001];

void sieve(){
		//Coi tat ca cac so tu 0 den n la so nguyen to
		// prime[i] = 1
		// prime[i] = 0
		for(int i = 0; i <= 1000000; i++){
			prime[i] = 1;
		//Loai 0 va 1 thu cong
		}
		prime[1] = prime [0] = 0;
		for(int i = 2; i<=1000; i++){
			//Neu i la so nguyen to
			if(prime[i]){
				//Duyet tat cac boi so cua i va cho no khong la so nguyen to
				for(int j=i*i; j <= 1000000; j+=i){
					prime[j] = 0;
				}
			}
		}
}
int main (){
	sieve();
	int n;
	scanf("%d", &n);
	for(int i = 0; i <= n; i++){
		if(prime[i])
			printf("%d ", i);
	}
	return 0;
}
