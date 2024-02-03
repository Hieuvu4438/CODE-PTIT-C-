#include <stdio.h>
int max(int a, int b){
	if(a < b) return b;
	else return a;
}
int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int max1 = a[0];
	
	int idx=0;
	for(int i = 0; i < n - 1; i++){
		if(a[i+1] > a[idx]){
			max1 = a[i+1];
			idx = i + 1;
		
		}
	}
	int max2 = 0;
	for(int i = 0; i < n; i++){
		if(i != idx){
			max2 = max(max2, a[i]);
		}
	}
	printf("%d %d", max1, max2);
	
}