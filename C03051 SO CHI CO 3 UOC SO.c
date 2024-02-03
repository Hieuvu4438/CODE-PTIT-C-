#include <stdio.h>

int check(long long n){
	int sum = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			if(i != n / i) sum += 2;
			else ++sum;
		}
	}
	if(sum == 3) return 1;
	else return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long l, r; scanf("%lld%lld", &l, &r);
		int dem = 0;
		for(long long i = l; i <= r; i++){
			if(check(i)) ++dem;
		}
		printf("%d\n", dem);
	}
}