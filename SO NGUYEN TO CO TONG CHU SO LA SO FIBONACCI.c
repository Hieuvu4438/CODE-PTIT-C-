#include <stdio.h>
#include <math.h>

int solve(long long n){
	if(n==0 | n==1)
		return 1;
	long long fn2=0, fn1=1;
	for(int i=3; i<=20; i++){
		long long fn=fn1+fn2;
		if(fn==n)
			return 1;
		fn2=fn1;
		fn1=fn;
	}
	return 0;
}

int nt(n){
	for(int i = 2; sqrt(n); i++){
		if(n%i==0)
			return 0;
	}
	return n>1;
}

int sum(int n){
	int ans = 0;
	while(n){
		ans += n%10;
		n/=10;
	}
	return solve(ans);
}

int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	int ok = 0;
	for(int i = a; i <= b; i++){
		if(sum(i) && nt(i)){
			printf("%d ", i);
			ok = 1;
		}
	}
	if(!ok)
		printf("-1");
}
