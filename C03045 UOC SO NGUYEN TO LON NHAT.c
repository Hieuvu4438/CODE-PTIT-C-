#include <stdio.h>
#include <math.h>
int max(int a, int b){
	if(a < b) return b;
	else return a;
}
int checknt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int max1 = 0;
		for(int i = 2; i <= n ; i++){
			if(n % i == 0 && checknt(i)){
				max1 = max(max1, i);
				while(n % i == 0) n/=i;
			}
		}
		printf("%d\n", max1);
	}
}