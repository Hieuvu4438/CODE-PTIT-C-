#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int checkDigit8(char c[]){
	int temp;
	for(int i = 0; i < strlen(c); i++){
		temp = c[strlen(c) - 1] - '0';
	}
	if(temp == 8) return 1;
	return 0;
}

int checkSum(char c[]){
	int sum = 0;
	for(int i = 0; i < strlen(c); i++){
		sum += c[i]-'0';
	}
	if(sum % 10 == 0) return 1;
	return 0;
}

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		int c[1000];
		gets(c);
		if(checkDigit8(c) && checkSum(c)) printf("YES\n");
		else printf("NO\n");
	}
}


