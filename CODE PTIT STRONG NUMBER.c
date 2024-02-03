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
    while(a != 0){
		int n = a%10;
		sum += gt(n);
		a /= 10;
    }
	return sum;
}

int main (){
	int a;
	scanf ("%d", &a);
	if (strong_number(a)==a) {
		printf ("1\n");
	}
	else {
		printf ("0\n");
	}
	
	return 0;
}
