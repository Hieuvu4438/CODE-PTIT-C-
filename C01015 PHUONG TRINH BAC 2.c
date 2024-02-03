#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c; scanf("%d%d%d", &a, &b, &c);
	int delta = b * b - 4 * a * c;
	if(delta < 0) printf("NO");
	else if(delta == 0){
		float nghiem = (float) -b/2*a;
		printf("%.2f", nghiem);
	}
	else{
		int delta1 = sqrt(delta);
		float nghiem1 = (float)(-b-delta1) / 2*a;
		float nghiem2 = (float)(-b+delta1) / 2*a;
		printf("%.2f %.2f", nghiem1, nghiem2);
	}
}