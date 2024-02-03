#include <stdio.h>

int increaseNumber(int a[], int n){
	int tmp;
	for(int i = 0; i < n; i++){
		if(a[i] > a[i+1]){
			a[i] = tmp;
			a[i+1] = a[i];
			tmp = a[i+1];
		}
	}
	return tmp;
}

int main(){
	int n, i, j;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] == a[j]){
				for(int k = j; k < n-1; k++){
					a[k] =a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	for (i = 0; i < n; i++) {
    	printf("%d ", a[i]);
  }
  	printf("\n");
  	return 0;
}

