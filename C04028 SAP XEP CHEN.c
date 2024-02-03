#include<stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			if(a[j] > a[i]){
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
		printf("Buoc %d: ",i);
		for(int k = 0; k <= i; k++) printf("%d ", a[k]);
		printf("\n");
	}
}