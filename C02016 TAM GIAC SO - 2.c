#include <stdio.h>

int main(){
	int n; 
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int cnt = 0;
		if(i % 2 == 0){
			cnt = 1;
			for(int j = 0; j <= i; j++){
				printf("%d", cnt);
				cnt += 2;
			}
		}
		else{
			cnt = 2;
			for(int j = 0; j <= i; j++){
				printf("%d", cnt);
				cnt += 2;
			}
		}
		printf("\n");
	}
}
