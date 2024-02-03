#include <stdio.h>
void sapxep(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; i++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	sapxep(a, n);
	for(int i = 0; i < n; i++){
		int cnt = 1;
		for(int j = i + 1; j < n; j++){
			if(a[i] == a[j]) printf("%d ", a[i]);
		}	
	}
}
