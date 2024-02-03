#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int temp;
	int min = 1e9;
	int minidex = 0;
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = 0; j < n; j++){
			if(a[i] > a[j]){
				sum += a[i] - a[j];
			}
			else if(a[i] < a[j]){
				sum += a[j] - a[i];
			}
			else sum = sum + 0;
			
		}
		if(sum < min){
			min = sum;
			minidex = i;
		}
		
	}
	printf("%d ", min);
	printf("%d", a[minidex]);
	
}
