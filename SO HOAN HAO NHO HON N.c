#include <stdio.h>

int perfectNumber(int n){
	int sum = 0;
	for(int i = 1; i <= n/2; i++){
		if(n % i == 0){
			sum += i;
		}
	}
	if(sum == n) return 1;
	else return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		if(perfectNumber(i)) printf("%d ", i);
	}
}
