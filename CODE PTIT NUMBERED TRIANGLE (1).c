#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	int cnt = 1;
	int c[100005];
	for(int i = 1; i <= n; i++){
		if(i % 2 == 1){
			for(int j = 1; j <= i; j++){
				c[j] = cnt++;
				printf("%d ", c[j]); 
			}
			printf("\n");
		}
		
		if(i % 2 == 0){
			for(int j = i; j >= 1; j--){
				c[j] = cnt++;
//				printf("%d ", c[j]);
				
			}
//			printf("\n");
			for(int j = 1; j <= i; j++){
				printf("%d ", c[j]);
			}
			printf("\n");
		}
	}
}