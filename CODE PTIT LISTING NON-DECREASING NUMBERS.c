#include <stdio.h>
long long luythua(int n){
	int tich = 1;
	for(int i = 1; i <= n; i++){
		tich *= 10;
	}
	return tich;
}

int nonDecrease(int n){
	int res = 0;
	int cnt = 0;
	while(n){
		int temp = n % 10;
		if(cnt != 0){
			if(res < temp) return 0;
		}
		res = temp;
		++cnt;
		n/=10;
		
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = luythua(n-1); i <= luythua(n)-1; i++){
			if(nonDecrease(i)) printf("%d ", i);
		}
		printf("\n");
	}
}
