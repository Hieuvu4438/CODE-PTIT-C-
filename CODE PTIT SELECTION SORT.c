#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n - 1; i++){
		int temp;
		int min = 1e9;
		for(int j = i; j < n; j++){
			if(a[j] < min){
				temp = j;
				min = a[j];
			}
		}
		int temp1 = a[i];
		a[i] = a[temp];
		a[temp] = temp1;
		printf("Step %d: ", i + 1);
		for(int i = 0; i < n; i++){
			printf("%d ", a[i]);
	}
		printf("\n");
	}

}
