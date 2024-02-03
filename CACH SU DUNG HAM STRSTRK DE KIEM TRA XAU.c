#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char a[1000], b[1000];
	scanf("%s%s",a, b);
	if(strstr(b, a)!=NULL){
		printf("YES");
	}
	else printf("NO");
}
