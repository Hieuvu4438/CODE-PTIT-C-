#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// TACH CAC TU TRONG XAU
int main(){
	char c[1000];
	gets(c);
	char *token = strtok(c, " ");
	while(token != NUll){
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
} 

// DEM SO LUONG TU TRONG XAU 
int main(){
	char c[1000];
	gets(c);
	char *token = strtok(c, " ");
	int cnt = 0;
	getchar();
	while(token != NUll){
		++cnt;
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	printf("%d", cnt);
} 

// LIET KE CAC TU IN HOA TRONG XAU

int check(char c[]){
	for(int i = 0; i < strlen(c); i++){
		if(islower(c[i]))
			return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar(); //Doc not phim Enter trong bo dem ban phim
	while(t--){
		char c[1000];
		gets(c);
		char *token = strtok(c, " ");
		while(token != NULL){
			if(check(token))
				printf("%s", token);
			token = strtok(NULL, " ");
		}
		printf("\n");
	}
}
