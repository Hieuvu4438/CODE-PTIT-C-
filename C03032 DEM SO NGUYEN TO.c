#include <stdio.h>
#include <math.h>

int check(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}
int check1(int n){
	while(n){
		int rev = n % 10;
		if(check(rev) == 0) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d%d", &a, &b);
		int dem = 0;
		for(int i = a; i <= b; i++){
			if(check(i) && check1(i)) ++dem;
		}
		printf("%d\n", dem);
	}
}