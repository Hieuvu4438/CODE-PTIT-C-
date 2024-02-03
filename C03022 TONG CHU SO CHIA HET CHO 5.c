#include <stdio.h>
#include <math.h>
int checknt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}
int sum(int n){
	int cnt = 0;
	while(n){
		int rev = n % 10;
		cnt += rev;
		n /= 10;
	}
	if(cnt % 5 == 0) return 1;
	else return 0;
}
int main(){
	int n; scanf("%d", &n);
	int dem = 0;
	for(int i = 0; i <= n; i++){
		if(checknt(i) && sum(i)){
			printf("%d ", i);
			++dem;
		}
	}
	printf("\n");
	printf("%d", dem);
}