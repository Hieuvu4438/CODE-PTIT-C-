#include <stdio.h>
long long max(long long a, long long b){
	if(a < b) return b;
	else return a;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		long long a[n];
		for(int i = 0; i < n; i++){
			scanf("%lld", &a[i]);
		}
		long long sum1 = 0, sum2 = -1e18;
		for(int i = 0; i < n; i++){
			sum1 += a[i];
			sum2 = max(sum1, sum2);
			if(sum1<0) sum1 = 0;
		}
		printf("%lld\n", sum2);
	}
}