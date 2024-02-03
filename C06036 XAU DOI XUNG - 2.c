#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> 
int main(){
	char c[100000];
	gets(c);
	int dem = 0;
	for(int i = 0; i < strlen(c); i++){
		dem++;
	}
	printf("%d", dem-1);
}
