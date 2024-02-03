#include <stdio.h>
#include <math.h>
//CACH 1: Liet ke n so fibonacci
void solve(int n){
	printf("0 1 ");
	long long fn1 = 1, fn2 = 0;
	for(int i = 3; i <= n; i++){
		long long fn = fn1 + fn2;
		printf("%lld ", fn);
		fn2=fn1;
		fn1=fn;
	}
} 

void solve2(int n){
	long long fibo[n];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i < n; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	for(int i = 0; i<n; i++){
		printf("%lld ", fibo[i]);
	}
}

//int main(){
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		int n;
//		scanf("%d", &n);
//		solve2(n);
//	}
//}

//CACH 2: Kiem tra 1 so co phai so fibonacci khong
void solve(int n){
	if(n == 0 || n == 1)
		return 1;
	long long fn1 = 1, fn2 = 0;
	for(int i = 3; i <= n; i++){
		long long fn = fn1 + fn2;
		if(fn == n)
			return 1;
		fn2=fn1;
		fn1=fn;
	}
	return 0;
} 
//int main(){
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		long long n;
//		scanf("%lld", &n);
//		if(solve(n))
//			printf("YES\n");
//		else printf("NO\n");
//	}
//}

//CACH 3: Dung mang de kiem tra so fibonacci:
long long fb[100];
void init(){
	fb[0]=0;
	fb[1]=1;
	for(int i =2; i<=92; i++){
		fb[i] = fb[i-1] + fb[i-2];
	}
}
int main(){
	init();
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int ok = 0;
		for(int i = 0; i<=92; i++){
			if(fb[i]){
				ok = 1;
				break;
			}
		if(ok)
			printf("YES\n");
		else printf("NO\n")		
		}
	}
}
