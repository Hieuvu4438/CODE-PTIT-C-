#include <stdio.h>
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
int main(){
	int t;
	scanf("%d", &t);
	for(int w = 1; w <= t; w++){
		int n;
		scanf("%d", &n);
		int a[n], b[n], c[2*n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &b[i]);
		}
		decrease(b, n);
		increase(a, n);
		int cnt1=0, cnt2=0;
		printf("Test %d:\n", w);
		for(int i = 0; i < n*2; i++){
			if(i % 2 == 0){
				c[i] = a[cnt1++];
			}
			else if(i % 2 == 1){
				c[i] = b[cnt2++];
			}
			printf("%d ", c[i]);
		}
		printf("\n");	
	}
}
