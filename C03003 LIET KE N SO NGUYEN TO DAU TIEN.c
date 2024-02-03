#include <stdio.h>
#include <math.h>

int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main(){
	int n; scanf("%d", &n);
	int dem = 0;
	for(int i = 2; i <= 100005; i++){
		if(nt(i)){
			++dem;
			printf("%d\n", i);
		}
		if(dem == n) break;
	}
}