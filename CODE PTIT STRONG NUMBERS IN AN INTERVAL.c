#include <stdio.h>

int gt (int a){
	int so = 1;
	for (int i = 2; i<=a; ++i){
		so *= i;
	}
	return  so;
}

int strong_number (int a){
	int sum = 0;
	int tmp = a;
    while(a != 0){
		int n = a%10;
		sum += gt(n);
		a /= 10;
    }
	if(sum == tmp) return 1;
	return 0;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a < b){
		for(int i = a; i <= b; i++){
			if(strong_number(i)) printf("%d ", i);
		}
	}
	if(a > b){
		for(int i = b; i <= a; i++){
			if(strong_number(i)) printf("%d ", i);
		}
	}
}
