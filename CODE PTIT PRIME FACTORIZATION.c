#include <stdio.h>
#include <math.h>
int main (){
	int a, n;
	scanf("%d", &n);
	while (n--){
		scanf("%d", &a);
		int i;
		for(i = 2; i <= sqrt(a); i++){
			while(a % i == 0){
				printf("%d ", i);
				a /= i;
			}
			
		}
		if (a > 1){
			printf("%d", a);
			
		}
		printf("\n");
	}
	return 0;
}
