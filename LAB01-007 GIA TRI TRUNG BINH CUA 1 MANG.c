#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
	}
	float c = (float)sum / n;
	printf("%.3f", c);
}