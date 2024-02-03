#include <stdio.h>
#include <math.h>
int giaithua(int n){
	int rev = 1;
	for(int i = 1; i <= n; i++){
		rev *= i;
	}
	return rev;
}
int main(){
	int n; scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			int a = giaithua(i) / (giaithua(j) * giaithua(i-j));
			printf("%d ", a);
		}
		printf("\n");
	}
}
