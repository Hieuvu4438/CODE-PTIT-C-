#include <stdio.h>
#include <math.h>

long long giaithua(int n){
	long long sum = 1;
	for(int i = 1; i <= n; i++){
		sum *= i;
	}
	return sum;
}
int max(int a, int b){
	if(a < b) return b;
	else return a;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, p;
		scanf("%d%d", &n, &p);
		long long sum = giaithua(n);
		int max1 = 0;
		for(int i = 1; i <= n; i++){
			long long sum1 = pow(p, i);
			if(sum % sum1 == 0){
				max1 = max(max1, i);
			}
		}
		printf("%d\n", max1);
	}
}