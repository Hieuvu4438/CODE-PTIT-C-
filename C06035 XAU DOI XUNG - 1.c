#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int dem = 0;
		int l = 0, r = strlen(c) - 1;
		int check = 0;
		while(l <= r){
			if(c[l] != c[r]) ++dem;
			++l;
			--r; 
		}
		if(strlen(c) % 2 == 0){
			if(dem == 1 || dem == 0) check = 1;
		}
		else if(strlen(c) % 2 == 1){
			if(dem == 2 || dem == 1 || dem == 0) check = 1;
		}
		if(check) printf("YES\n");
		else printf("NO\n");
	}
}
