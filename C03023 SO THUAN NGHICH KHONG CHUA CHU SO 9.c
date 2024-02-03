#include <stdio.h>
#include <math.h>

int checktn(int n){
	int rev = 0;
	int res = n;
	while(n){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	if(res == rev) return 1;
	else return 0;
}

int check9(int n){
	while(n){
		int rev = n % 10;
		if(rev == 9) return 0;
		n /=10;
	}
	return 1;
}

int main(){
	int n; scanf("%d", &n);
	int dem = 0;
	for(int i = 2; i <= n; i++){
		if(checktn(i) && check9(i)){
			printf("%d ", i);
			++dem;
		} 
	}
	printf("\n");
	printf("%d", dem);
}