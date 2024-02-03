#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int precede(char c[]){
	for(int i = 0; i < strlen(c); i++){
		if((c[i] == 'I' && c[i+1] == 'L') || (c[i] == 'I' && c[i+1] == 'C')) return 0;
		else if((c[i] == 'I' && c[i+1] == 'D') || (c[i] == 'I' && c[i+1] == 'M')) return 0;
		else if((c[i] == 'X' && c[i+1] == 'D') || (c[i] == 'X' && c[i+1] == 'M')) return 0;
	} 
	return 1;
}

int consecutive(char c[]){
	for(int i = 0; i < strlen(c); i++){
		int cnt = 0;
		if(c[i] == 'I' || c[i] == 'X' || c[i] == 'C' || c[i] == 'M'){
			for(int j = i + 1; j < strlen(c); j++){
				if(strcmp(c[i],c[j])==0) ++cnt;
			}
			if(cnt > 3) return 0;
		}
		else if(c[i] == 'V' || c[i] == 'L' || c[i] == 'D'){
			for(int j = i + 1; j < strlen(c); j++){
				if(strcmp(c[i], c[j]) == 0) ++cnt;
			}
			if(cnt > 1) return 0;
		}
	}
}

int identical(char c[]){
		
}


