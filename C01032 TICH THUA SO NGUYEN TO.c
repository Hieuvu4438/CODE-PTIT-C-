#include <stdio.h>
#include <math.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; 
		scanf("%d", &n);
		int sum = 1;
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				while(n % i == 0){
					n/=i;
				}
				sum *= i;
			}
		}
		if(n!=1) sum *= n;
		printf("%d\n", sum);
	}
}
