#include <stdio.h>
#include <math.h>
int checknt(long long n){
	for(long long i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int checkcan(long long n){
	long long can = sqrt(n);
	if(can * can == n) return 1;
	else return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long l, r; scanf("%lld%lld", &l, &r);
		long long dem = 0;
		for(long long i = l; i <= sqrt(r); i++){
			if(checknt(i)) ++dem;
		}
		printf("%d\n", dem);
	}
}