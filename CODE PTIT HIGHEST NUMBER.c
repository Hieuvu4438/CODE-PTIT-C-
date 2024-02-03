#include <stdio.h>
#include <math.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int idx;
		int max = -1e9;
		for(int i = 0; i < n; i++){
			if(a[i] >= max){
				max = a[i];
				idx = i;
		}	
}
		printf("%d\n", max); 
		for(int i = 0; i < n; i++){
			if(a[i] == a[idx]){
				printf("%d ", i);
			}
		}	
		printf("\n");
	}
}
