#include <stdio.h>
#include <math.h>
long long lon(long long n){
	long long res = 0;
	while(n){
		res = res * 10 + n % 10;
		n /= 10;
	}
	return res;
}

int dem0(long long n){
	long long cnt = 0;
	while(n){
		int temp = n % 10;
		if(temp == 0) ++cnt;
		else break;
		n/=10;
	} 
	return cnt;
}

long long min(long long n){
	long long rev = 0;
	long long m = n;
	while(n){
	int temp = n % 10; //645570
	if(temp == 6){
		temp = 5;
		rev = rev * 10 + temp;
	}
	else{
	rev = rev*10 + temp;
}
	n/=10;
	}
	//076645
	if(dem0(m)){
		rev = lon(rev);
		rev = rev * pow(10, dem0(m));
	}
	else rev = lon(rev); 	
	return rev;
} 


long long max(long long n){
	long long rev = 0;
	long long m = n;
	while(n){
		int temp = n % 10;
		if(temp == 5){
			temp = 6;
			rev = rev * 10 + temp;
		}
		else{
			rev = rev*10 + temp;
		}
	
		n/=10;
	}
	if(dem0(m)){
		rev = lon(rev);
		rev = rev * pow(10, dem0(m));
	}
	else rev = lon(rev);
	return rev;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long a, b;
		scanf("%lld%lld", &a, &b);
		long long n = min(a) + min(b);
		long long m = max(a) + max(b);
		printf("%lld %lld\n", n, m);
	}
}
