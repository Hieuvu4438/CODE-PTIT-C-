#include <stdio.h>
#include <math.h>

int main(){
	int a, b; scanf("%d%d", &a, &b);
	int sum = 0;
	if(a <= b){
		for(int i = a; i <= b; i++){
			sum+=i;
		}
		printf("%d", sum);
	}
	else{
		for(int i = b; i <= a; i++) sum+=i;
		printf("%d", sum);
		
	}
}