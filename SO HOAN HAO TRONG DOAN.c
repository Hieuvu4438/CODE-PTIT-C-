#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		int x = a;
		a = b;
		b = x;
	}
	for(int i = a; i <= b; i++){
		if(i == 6) printf("6 ");
		else if(i == 28) printf("28 ");
		else if(i == 496) printf("496 ");
		else if(i == 8128) printf("8128 ");
		else if(i == 33550336) printf("33550336");
	}
}
