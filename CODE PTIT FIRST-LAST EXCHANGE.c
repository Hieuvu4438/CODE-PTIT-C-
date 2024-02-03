#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d", &n);
	int socuoi = n % 10;
	int m = n, dem = 0, sodau;
	while(n >= 10){
		++dem;
		n /= 10;
	}
	sodau = n;
	int giua = m - sodau*(int)pow(10, dem) - socuoi;
	int res = socuoi *(int)pow(10, dem) + giua + sodau;
	printf("%d", res);
	return 0;
}
