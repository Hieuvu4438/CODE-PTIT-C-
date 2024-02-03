#include <stdio.h>
#include <math.h>
int checkFibo(long long n){
	if(n == 0 || n == 1) return 1;
	int f1=1, f2=0;
	
	for(int i = 2; i <= 93; i++){
		int fn = f1 + f2;
		if(n == fn) return 1;	
		f1 = fn;
		f2 = f1;
	}
	return 0;
}
int main(){
	long long n; scanf("%lld", &n);
	if(checkFibo(n)) printf("1");
	else printf("0");
}