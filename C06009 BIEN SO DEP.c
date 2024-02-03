#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int check1(int n){
	while(n >= 10){
		int rev = n % 10;
		n /= 10;
		int res = n % 10;
		if(rev != res) return 0;
	}
	return 1;
}

int check2(int n){
	while(n){
		int rev = n % 10;
		if(rev != 6 && rev != 8) return 0;
		n /= 10;
	}
	return 1;
}

int check3(int n){
	while(n >= 10){
		int rev = n % 10;
		n /= 10;
		int res = n % 10;
		if(rev < res) return 0;
	}
	return 1;
}
int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int n = 0;
		int a[100][100];
		char *token = strtok(c, " .");
		while(token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " .");
		}
		int d[1000] ={0};
		for(int i = 1; i < n; i++){
			d[i] = atoi(a[i]);
		}
		if(check1(d[1]) && check1(d[2])) printf("YES\n");
		else if(check2(d[1]) && check2(d[2])) printf("YES\n");
		else if(check3(d[1]) && check3(d[2])){
			int cnt = d[2] % 10;
			int cnt1 = d[1] % 10;
			if(cnt - cnt1 >= 2) printf("YES\n");
			else printf("NO\n");
		}
		else printf("NO\n");
	}
}