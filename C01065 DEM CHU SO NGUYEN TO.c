#include <stdio.h>
#include <math.h>
int dem[10];
int checknt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i  == 0) return 0;
	}
	return n > 1;
}
int main(){
	int n; scanf("%d", &n);
	int a[10];
	for(int i = 0; i < 10; i++){
		if(n != 0){
			int rev = n % 10;
			a[i] = rev;
		}
		n /= 10;
	}
	for(int i = 0; i < 10; i++){
		if(checknt(a[i])) ++dem[a[i]];
	}
	for(int i = 9; i >= 0; i--){
		if(dem[i] != 0) printf("%d %d\n", i, dem[i]);
	}
}
