#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[1000];
	gets(c);
	int chucai = 0, chuso = 0, kytukhac = 0;
	for(int i = 0; i < strlen(c); i++){
		if(isalpha(c[i])){
			++chucai;
		}
		else if(isdigit(c[i])) ++chuso;
		else ++kytukhac;
	}
	printf("%d %d %d", chucai, chuso, kytukhac);
}
