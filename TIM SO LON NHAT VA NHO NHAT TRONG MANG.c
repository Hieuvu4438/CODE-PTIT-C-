#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int min = 1e9+1, max = -1e9-1;
	for(int i = 0; i < n; i++){
		if(a[i] < min){
			min = a[i];
		}
	if(a[i] > max){
		max = a[i];
	}
}
printf("%d %d", max, min);
} 

