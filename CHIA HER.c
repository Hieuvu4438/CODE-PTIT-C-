#include <stdio.h>
#include <math.h>

long long giaithua(long long n){
	long long tich = 1;
	for(int i = 1; i <= n; i++){
		tich *= i;
	}
	return tich;
}

int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	if((long long)giaithua(n) % (long long)(pow(2,k)) == 0) printf("YES\n");
	else printf("NO\n");
}
