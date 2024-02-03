#include <stdio.h>
#include <math.h>

int checknt(long long n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}
int check(long long n){
	long long can = sqrt(n);
	if(can * can != n) return 0;
	if(checknt(can)) return 1;
	else return 0;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long l, r;
		scanf("%lld%lld", &l, &r);
		int cnt = 0;
		for(long long i = l; i <= r; i++){
			if(check(i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
}