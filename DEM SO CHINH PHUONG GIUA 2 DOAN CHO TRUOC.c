#include <stdio.h>
#include <math.h>

int main(){
	int a, b;
	int t; scanf("%d", &t);
	scanf("%d%d", &a, &b);
	int c1 = sqrt(a);
	int c2 = sqrt(b);
	if(c1 * c1 != a)
		++c1;
	printf("%d\n", c2 - c1 + 1);
	return 0;
}
	
