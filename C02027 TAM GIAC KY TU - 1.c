#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	int init = 1;
	for(int i = 1; i <= n; i++){
		if(i % 2 == 1){
			if(i == 1) printf("%c ",96 + init);
			else{
				for(int j = 1; j <= i; j++){
				 printf("%c ",96 + ++init );
				}
			}
			
		}
		else{
			init += i;
			int rev = init;
			for(int j = 1; j <= i; j++){
				printf("%c ", 96 + rev--);
			}
		}
		printf("\n");
	}
}
