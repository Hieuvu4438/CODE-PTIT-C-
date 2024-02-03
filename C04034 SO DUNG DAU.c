#include <stdio.h>
#include <math.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		int check[1005] = {0};
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			check[a[i]] = 1;
		}
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(a[j] >= a[i]){
					check[a[i]] = 0;
					break;
				} 
			}
		}
		for(int i = 0; i < n; i++){
			if(check[a[i]]) printf("%d ", a[i]);
		}
		
		printf("\n");
	}
}