#include <stdio.h>
int main (){
	int a, b;
	scanf("%d %d", &a, &b);
	if(b == 0){
		printf("0");
	} else{
		
	printf("%d", a + b);
	printf(" %d", a - b);
	printf(" %d", a * b);
	printf(" %.2f", (float)a / b);
	printf(" %d", a % b); 
	}
	return 0;
}
