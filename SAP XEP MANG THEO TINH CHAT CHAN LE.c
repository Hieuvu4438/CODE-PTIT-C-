#include <stdio.h>

void selectionSort(int a[], int n){
	for(int i = 0; i < n; i++){
		int m = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[m]) m = j;
		}
		int tmp = a[m];
		a[m] = a[i];
		a[i] = tmp;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int chan[n], le[n];
	int c = 0, l = 0;
	for(int i=0;i<n;i++){
		int x;
		scanf("%d", &x);
		if(x%2==0) chan[c++] = x;
		else le[l++] = x;
	}
	selectionSort(chan,c);
	selectionSort(chan,l);
	for(int i = 0; i < c; i++) printf("%d ", chan[i]);
	for(int i = 0; i < l; i++) printf("%d ", le[i]);
}
