#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	int dau = n % 10;
	int rev = 0;
	while(n){
		rev = n % 10;
		n/=10;
	}
	printf("%d %d", rev, dau);
}