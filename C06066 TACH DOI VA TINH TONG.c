#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main(){
	char c[201];
	gets(c);
	while(strlen(c) != 1){
		int len	= strlen(c);
		int so1 = 0;
		for(int i = 0; i < len / ; i++){
			int rev = c[i] - '0';
			so1 += rev * pow(10, strlen(c) / 2 - i);
		}
		int so2 = 0;
		for(int i = strlen(c) / 2; i < strlen(c); i++){
			int rev = c[i] -'0';
			so2 += rev * pow(10, (strlen(c)-1) -i );
		}
		printf("%d\n", so1 + so2);
		len /= 2;
	}
}
