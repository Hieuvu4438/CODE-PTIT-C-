#include <stdio.h>
int check(int n){
	int so = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			so *= i;
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if(n > 1){
		so *= n;
	}
	return so;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", check(n));	
	}
}
