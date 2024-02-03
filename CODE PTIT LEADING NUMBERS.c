#include<stdio.h>
int leadingNumber(int a[], int n){
	int check = 1;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] <= a[j]) return 0;
		}
		return 1;
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			int ok = 1;
			for(int j = i + 1; j < n; j++){
				if(a[i] <= a[j]){
					ok = 0;
					break;
				}
			}
			if(ok) printf("%d ", a[i]);	
		}
		printf("\n");
	}
}
