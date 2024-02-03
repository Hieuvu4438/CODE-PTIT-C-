#include <stdio.h>
#include <math.h>
int main (){
	int a, b, n, m;
	scanf("%d", &m);
	
	while (m--){
	
		scanf("%d %d", &a, &b);
		while(b != 0){
		n = a % b;
		a = b;
		b = n;
	}
	printf("%d\n", a);
}
			
	return 0;
}
