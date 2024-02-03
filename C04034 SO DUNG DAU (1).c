#include <stdio.h>
void sx(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] > a[i]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int m = 0;
		int b[m];
		for(int i = 0; i < n; i++){
			int check = 1;
			for(int j = i + 1; j < n; j++){
				if(a[j] >= a[i]){
					check = 0;
					break;
				}
			}
			if(check){
				b[m++] = a[i];
			}
			
		}
//		sx(b, m);
		for(int i = 0; i < m; i++){
			printf("%d ", b[i]);
		}
		printf("\n");
	}
}