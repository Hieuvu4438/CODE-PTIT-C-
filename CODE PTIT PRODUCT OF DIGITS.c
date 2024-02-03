#include <stdio.h>
#include <math.h>
int main (){
	int n, tich = 1;
	scanf("%d", &n);
	while (n != 0){
		
		tich *= n % 10;
		n /= 10;
	}
	printf("%d", tich);
	return 0;
}
