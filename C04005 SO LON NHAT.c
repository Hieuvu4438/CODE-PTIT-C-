#include <stdio.h>
int max1(int a, int b){
	if(a < b) return b;
	else return a;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int max = 0;
		for(int i = 0; i < n; i++){
			max = max1(max, a[i]);
		}
		printf("%d\n", max);
		
		for(int i = 0; i < n; i++){
			if(a[i] == max) printf("%d ", i);
		}
		printf("\n");
	}
}
