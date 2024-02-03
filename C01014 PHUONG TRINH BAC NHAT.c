#include <stdio.h>


int main(){
	int a, b; scanf("%d%d", &a, &b);
	if(a == 0 && b != 0) printf("Vo nghiem");
	else if(a == 0 && b == 0) printf("Vo so nghiem");
	else{
		float nghiem = (float) -b / a;
		printf("%.2f", nghiem); 
	} 
}