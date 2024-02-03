#include <stdio.h>
#include <math.h>
long long luythua(long long n){
	long long tich=1;
	for(int i=1;i<=n;++i){
		tich*=10;
	}
	return tich;
}
long long checkPalindromic(long long n){
	long long rev = 0;
	long long m = n;
	while(n){
		rev = rev*10 + n%10;
		n/=10;
	}
	if(rev == m) return 1;
	return 0;
}

long long sum(long long n){
	long long sum = 0;
	while(n){
		sum += n % 10;
		n/=10;
	}
	if(sum % 10 == 0) return 1;
	return 0;
}
long long digit4(long long n){
	long long tmp;
	while(n){
		tmp = n % 10;
		if(tmp == 4) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%d", &n);
		for(int i = luythua(n-1); i <=luythua(n)-1; i++){
			if(checkPalindromic(i) && digit4(i) && sum(i))
				printf("%d ", i);
		}
		printf("\n");
	}
}	

