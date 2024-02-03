#include <stdio.h>

int sum(int n){
	int tong = 0;
	while(n){
		tong += n % 10;
		n/=10;
	}
	return tong;
}

int main(){
	int a, b; scanf("%d%d", &a, &b);
	if(sum(a) <= sum(b)) printf("%d %d", a, b);
	else printf("%d %d", b, a);
}