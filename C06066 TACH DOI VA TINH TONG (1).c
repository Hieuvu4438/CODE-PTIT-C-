#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int d[1000005] = {0};
int main(){
	char c[201];
	scanf("%s", c);
	for(int i = 0; i < strlen(c); i++){
		d[i] = c[i] -'0';
	}
	int n = strlen(c);
	int n1 = strlen(c), n2 = 0;
	while(n){
		if(n <= 3) n1 = 1;
		else n1 /= 2;
		n2 = n - n1;
		n /= 2;
		int res1 = 0, res2 = 0;
		int sum = 0;
		for(int i = 0; i < n1; i++){
			res1 = res1 * 10 + d[i];
		}
		for(int i = n1; i < n1 + n2; i++){
			res2 = res2 * 10 + d[i];
		}
		sum += res1 + res2;
		printf("%d\n", sum);
		for(int i = n2 - 1; i >= 0; i--){
			d[i] = sum % 10;
			sum /= 10;
		}
		
	}       
		
}