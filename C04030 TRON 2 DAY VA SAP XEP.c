#include <stdio.h>
void increase(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void decrease(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] < a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main(){
	int t; scanf("%d", &t);
	for(int k = 1; k <= t; k++){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		int b[n];
		for(int i = 0; i < n; i++) scanf("%d", &b[i]);
		increase(a, n);
		decrease(b, n);
		int c[2*n];
		int demchan = 0, demle = 0;
		printf("Test %d:\n", k);
		for(int i = 0; i < 2*n; i++){
			if(i % 2 == 0){
				c[i] = a[demchan++];
			}
			else c[i] = b[demle++];
		}
		for(int i = 0; i < 2*n; i++) printf("%d ", c[i]);
		printf("\n");
	}
}