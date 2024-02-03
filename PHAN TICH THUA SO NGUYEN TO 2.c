#include <stdio.h>
#include <math.h>
void check(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				printf("%d", i);
				n /= i;
				if(n != 1) printf("x");
			}
		}
	}
	if(n>1) printf("%d", n);
}
int main(){
	int n;
	scanf("%d", &n);
	check(n);
	return 0;
}
