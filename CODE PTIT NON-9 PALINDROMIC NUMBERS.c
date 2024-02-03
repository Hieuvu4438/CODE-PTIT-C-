#include <stdio.h>
#include <math.h>
int tach9(int n){
	int tmp;
	tmp = n;
	while(n){
		int res = n % 10;
		n/=10;
		if(res == 9) return 0;
	}
	return 1;
}
int palindromicNumber(int n){
	int rev = 0;
	int tmp = n;
	while(n > 0){
		rev = rev*10 + n % 10;
		n /= 10;
	}
	if(tmp == rev) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for(int i = 2; i <= n; i++){
		if(palindromicNumber(i) && tach9(i)){
			printf("%d ", i);
			++cnt;
		} 
	}
	printf("\n%d", cnt);
	return 0;
}
