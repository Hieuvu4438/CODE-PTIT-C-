#include <stdio.h>

int main (){
	int a, b;
	scanf("%d %d", &a, &b); int sum;
	sum = 0;
	if(a < b){
		for(; a <= b; a++){
		sum += a;
	}
}	else {
		for(; b <= a; b++){
		sum += b;	
}
}
	printf("%d", sum);
	
	return 0;
} 
