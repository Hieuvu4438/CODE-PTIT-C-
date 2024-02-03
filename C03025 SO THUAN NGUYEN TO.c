#include <stdio.h>
#include <math.h>

int checknt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int tachnt(int n){ 
	while(n){
		int rev = n % 10;
		if(rev != 2 && rev != 3 && rev != 5 && rev != 7) return 0;
		n/=10;
	}
	return 1;
}

int tongnt(int n){
	int rev = n;
	int cnt = 0;
	while(n){
		cnt += n % 10;
		n /= 10;
	}
	if(checknt(cnt)) return 1;
	else return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a, b; 
		scanf("%d%d", &a, &b);
		int dem = 0;
		for(int i = a; i <= b; i++){
			if(tachnt(i) && checknt(i) && tongnt(i)) ++dem;
		}
		
		printf("%d\n", dem);
	}
}
