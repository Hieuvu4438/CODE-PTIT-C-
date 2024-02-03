#include <stdio.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a == 0 && b == 0){
		printf("Infinite solutions\n");	
	}
	else if(a == 0 && b != 0){
		printf("No solution\n");
	}
	else{
		printf("%.2f", -(float)b / a);
	}
	
	return 0;
}
