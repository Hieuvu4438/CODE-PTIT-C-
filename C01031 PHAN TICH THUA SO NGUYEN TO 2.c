#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	for(int i = 2; i <= sqrt(n); i++){
		int dem = 0;
		if(n % i == 0){
			while(n % i == 0){
				++dem;
				n /= i;
			}
			printf("%d", i);
			while(dem != 1){
				printf("x%d", i);
				--dem;
			}
			if(n!=1) printf("x");
		}
	}
	if(n != 1) printf("%d", n);
}
