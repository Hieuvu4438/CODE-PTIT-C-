#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int dem[1000];
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int check = 0;
		int check1 = 1;
		for(int i = 0; i < strlen(c); i++){
			if(c[i] < '0' || c[i] > '9') check = 1;
		}
		if(check){
			printf("INVALID\n");
			check1 = 0;
		} 
		if(check1){
			int check2 = 1;
		for(int i = 0; i < strlen(c); i++){
			dem[c[i] - '0'] = 1;
		}
		for(int i = 0; i < 10; i++){
			if(dem[i] == 0) check2 = 0;
		}
		if(check2){
			printf("YES\n");
		}
		else printf("NO\n");
		}
		
	}
}
