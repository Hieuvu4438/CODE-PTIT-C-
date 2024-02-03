#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}
int tn(char a[], int n){
	int l = 0, r = n - 1;
	while(l <= r){
		if(a[l] != a[r]) return 0;
		else{
			++l;
			--r;
		}
	}
	return 1;
}
int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[501];
		gets(c);
		int check = 1;
		for(int i = 0; i < strlen(c); i++){
			int rev = c[i] - '0';
			if(nt(rev) == 0) check = 0;
		}
		if(check && tn(c, strlen(c))){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
