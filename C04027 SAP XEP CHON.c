#include <stdio.h>
int min(int a, int b){
	if(a < b) return a;
	else return b;
}
int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n-1; i++){
		int min1 = a[i];
		int tmp = 0;
		for(int j = i + 1; j < n; j++){
			if(min1 > a[j]){
				min1 = a[j];
				tmp = j;
			}
		}
		int temp = a[i];
		a[i] = a[tmp];
		a[tmp] = temp;
		printf("Buoc %d: ", i + 1);
		for(int k = 0; k < n; k++) printf("%d ", a[k]);
		printf("\n");
	}
}