#include <stdio.h>
int main (){
	int a, n;
	scanf("%d", &n);
	while (n--){
		int sum = 0;
		scanf("%d", &a);
		while (a != 0){
		sum += a % 10;
		a /= 10;
	}
 	printf ("%d\n", sum); 
} 
	
	return 0;
}
