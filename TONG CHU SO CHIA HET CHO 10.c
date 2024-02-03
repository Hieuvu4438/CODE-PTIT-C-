#include <stdio.h>

int sum(int n){
	int tong = 0;
	while(n){
		tong += n % 10;
		n /= 10;
		
	}
	if(tong % 10 == 0) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(sum(n)) printf("YES\n");
		else printf("NO\n");
	}
}
