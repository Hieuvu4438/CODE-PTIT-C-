#include <stdio.h>
#include <math.h>
int checknt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int checktn(int n){
	int res = n;
	int rev = 0;
	while(n){
		rev = rev * 10 + n % 10;
		n/=10;
	}
	if(rev == res) return 1;
	else return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d%d", &a, &b);
		int dem = 0;
		for(int i = a; i <= b; i++){
			if(checknt(i) && checktn(i)){
				printf("%d ", i);
				++dem;
			}
			if(dem == 10){
				printf("\n");
				dem = 0;
			}
		}
		printf("\n\n");
	}
}