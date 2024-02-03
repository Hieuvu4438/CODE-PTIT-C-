#include <stdio.h>
#include <math.h>

int giaithua(int n){
	int tich = 1;
	for(int i = 1; i <= n; i++) tich *= i;
	return tich;
}

int main(){
	int n; scanf("%d", &n);
	int res = n;
	int sum = 0;
	while(n){
		int rev = n % 10;
		sum += giaithua(rev);
		n/=10;
	}
	if(sum == res) printf("1");
	else printf("0");
}