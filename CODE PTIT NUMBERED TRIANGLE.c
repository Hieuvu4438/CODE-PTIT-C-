#include <stdio.h>

void sapxep(int n){
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			if(i < j){
				int temp = i;
				i = j;
				j = temp;
			}
		}
		printf("%d ", i);
	}
}

 

int main(){
	int dong;
	scanf("%d", &dong);
	int cnt = 0;
	for(int i = 1; i <= dong; i++){
		if(i % 2 == 1){
			for(int j = 1; j <= i; j++){
				++cnt;
				printf("%d ", cnt);
			}
		}
	
		if(i % 2 == 0){
			for(int k = 1; k <= i; k++){
				++cnt;
				
				printf("%d ", cnt);
				
			} 
		}
		printf("\n");	
	}
}
