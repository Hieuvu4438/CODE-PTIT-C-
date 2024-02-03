#include <stdio.h>
int main(){
	

	int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		int min1 = 1e9, min2 = 0;
		for(int i = 0; i < n; i++){	
			int idx = i;x	
			for(int j = i + 1; j < n; j++){
				if(a[j] < min1){	
					min1 = a[j];
					idx = j;
					
				}
			}
			
		
		printf("%d %d", min1, min2);
	}
}