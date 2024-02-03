#include <stdio.h>
int main(){
	int a, b, c;
	scanf ("%d%d%d", &a, &b, &c);
	int delta = b*b - 4*a*c;
	if(delta < 0){
		printf("NO\n");
	}
	else if(delta == 0){
		printf("%.2f\n", -(float)b / (2*a));
	}
	else{
		printf("%.2f ", (-(float)b + sqrt(delta)) / (2*a));
		printf("%.2f", (-(float)b - sqrt(delta)) / (2*a));
	}
	return 0;
}
