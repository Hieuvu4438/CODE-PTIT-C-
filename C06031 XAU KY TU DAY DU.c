#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char c[1000];
	gets(c);
	int dem1 = 0;
	char dem[26];
	for(int i = 0; i < strlen(c); i++){
		dem[c[i]] == 1;
		
	}
	for(int i = 97; i <= 122; i++){
		if(dem[i] == 0) ++dem1;
	}
	printf("%d", dem1);
}
