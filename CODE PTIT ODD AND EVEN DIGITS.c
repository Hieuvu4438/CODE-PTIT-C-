#include <stdio.h>
#include <math.h>
int main (){
	int n, count1 = 0, count2 = 0;
	int a; scanf("%d", &a);
	while(a--){
		count1 = 0;
		count2 = 0;
		scanf("%d", &n);
		while(n != 0){
		int b;
		b = n % 10;
		if(b % 2 == 0){
			count2 ++; 
		} else{
			count1 ++;	
}
		n /= 10;
		
	} 
	printf("%d %d\n", count1, count2);
} 	

	return 0;
}
