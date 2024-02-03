#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		
	}
	for(int i = 0; i < n-1; i++){
		int temp = i;
		for(int j = i + 1; j < n; j++){
			if(a[temp] > a[j]){
				temp = j;
			}
		}
		int tmp = a[i];
		a[i] = a[temp];
		a[temp] = tmp;
		for(int j = 0; j < n; j++) printf("%d ", a[j]);
		printf("\n");
	}
}