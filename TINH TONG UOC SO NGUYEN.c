#include <stdio.h>
#include <math.h>
int sum(int n){
	int sum = 0;
	for(int i = 1; i<= sqrt(n); i++){
		if(n%i==0){
			if(i != n/i){
				sum += i+n/i;
			}
			else sum += i;
		}
	}
	return sum;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", sum(n));
	}
}
