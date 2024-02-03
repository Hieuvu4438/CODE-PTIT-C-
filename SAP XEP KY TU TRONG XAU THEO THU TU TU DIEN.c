#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, void *b){
	char*x = (char*)a;
	char*y = (char*)b;
	if(*x < *y) return -1;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[1000];
		scanf("%s", c);
		qsort(c, strlen(c), sizeof(char), cmp);
		printf("%s\n", c);
	}
}
