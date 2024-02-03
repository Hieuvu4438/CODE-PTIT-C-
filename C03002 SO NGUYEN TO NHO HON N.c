#include <stdio.h>
#include <math.h>

int checknt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
	
}

int main(){
	int n; scanf("%d", &n);
	for(int i = 2; i < n; i++){
		if(checknt(i)) printf("%d\n", i);
		
	}
}