#include <stdio.h>
#include <math.h>

int check(int n){
	if(n <= 1){
		return 0;
	}
	else if(n == 2 || n == 3){
		return 1;
	}
	for(int i = 2; i < sqrt(n)+1; i++){
		if(n % i == 0) 
			return 0;
	}
	return 1;
}

int main(){
	int n;
	long long i;
	char a;
	scanf("%d", &n);
	while(n--){
		scanf("%lld",&i);
		if(check(i)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}
