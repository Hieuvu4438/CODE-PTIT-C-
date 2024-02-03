#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


//Chuan hoa ten nguoi dung 1:
int cmp(const void *a, const void *b){
	char*x = (char*)a;
	char*y = (char*)b;
	if(*x < *y)	return -1;
	return 1;
}

void chuanhoa(char c[]){
	c[0] = toupper(c[0]);
	for(int i = 1; i < strlen(c); i++){
		c[i] = tolower(c[i]);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000], a[20][50];
		int n = 0;
		gets(c);
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy(a[n], token); ++n;
			token = strtok(NULL, " ");
		}
		for(int i = 0; i < n; i++){
			chuanhoa(a[i]);
			printf("%s ", a[i]);
			if(i!=n-1) printf(" ");
			
		}
		printf("\n");
	}
}

// Chuan hoa ten nguoi dung 2:
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000], a[20][50];
		int n = 0;
		gets(c);
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy(a[n], token); ++n;
			token = strtok(NULL, " ");
		}
		chuanHoa(a[n-1]);
		printf("%s, ", a[n-1]);
		for(int i = 0; i < n -1; i++){
			chuanHoa(a[i]);
			printf("%s", a[i]);
			if(i!n-2) printf(" ");
		}
		printf("\n");
	}
}

// Chuan hoa ten nguoi dung 3:
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000], a[20][50];
		int n = 0;
		gets(c);
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy(a[n], token); ++n;
			token = strtok(NULL, " ");
		}
		strupp(a[n-1]); 
		printf("%s, ", a[n-1]);
		for(int i = 0; i < n -1; i++){
			chuanHoa(a[i]);
			printf("%s", a[i]);
			if(i!n-2) printf(" ");
		}
		printf("\n");
	}
}
