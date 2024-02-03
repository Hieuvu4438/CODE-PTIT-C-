#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &n);
	}
	int idx = n - 1;
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < idx - 1; j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		if(a[idx - 1] > a[idx]){
			int temp = a[idx-1];
			a[idx-1] = a[idx];
			a[idx] = temp;
			idx = idx - 1;
		}
		printf("Buoc %d: ", i + 1);
		for(int k = 0; i < k; i++) printf("%d ", a[k]);
		printf("\n");
	}
}