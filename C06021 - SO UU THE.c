#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int check = 1;
		int check1 = 1;
		for(int i = 0; i < strlen(c); i++){
			if(c[0] == '0' || c[i] < '0' || c[i] > '9') check = 0;
		}
		if(check == 0){
			printf("INVALID\n");
			check1 = 0;
		} 
		if(check1){
			int demchan = 0, demle = 0;
			for(int i = 0; i < strlen(c); i++){
				if((c[i] - '0') % 2 == 0) ++demchan;
				else ++demle;
				
			}
			if((demchan > demle && (c[strlen(c) - 1] - '0') % 2 == 0 && strlen(c) % 2 == 0) || (demle > demchan && (c[strlen(c) - 1] - '0') % 2 == 1 && strlen(c) % 2 == 1))
				printf("YES\n");
			else printf("NO\n");
		}
		
	}
}
