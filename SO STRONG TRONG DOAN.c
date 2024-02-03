#include<stdio.h>
#include<math.h>
#include<string.h>

int giaithua(int a){
	int x = 1;
	for(int i = 1; i <= a; i++){
		x = x*i;
	}
	return x;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		int x = a;
		a = b;
		b = x;
	}
	for(int i = a; i <= b; i++){
		int sum = 0;
		int gan = i;
		if(i > 500000) break;
		while( gan > 0 ){
			sum = sum + giaithua(gan % 10);
			gan = gan / 10;
		}
		if( i == sum && i != 0 ) printf("%d ", i);
	}
}
