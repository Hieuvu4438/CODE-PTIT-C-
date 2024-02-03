#include <stdio.h>
#include <math.h>

int main (){
	int n;
	scanf("%d", &n);
	int i;
	for (i = 1; i <= n ;n--){
		int a, b;
		scanf("%d", &a);
		b = sqrt(a);
		if(a == b * b){
			printf ("YES\n");
	}	else{
			printf("NO\n");
		}
	}
	return 0;
}

