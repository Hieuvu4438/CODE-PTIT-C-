#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	while(a--){
		int n;
		scanf("%d", &n);
		float decimal = 1 / (float)n;
		printf("%.15f", decimal);
	}
	return 0;
} 
