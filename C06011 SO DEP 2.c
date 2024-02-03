#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
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
		char c[505];
		gets(c);
		int dem = 0;
		for(int i = 0; i < strlen(c); i++){
			if(i == 0){
				if(c[i] == '8') ++dem;
			}
			while(i != 0 && i != strlen(c) - 1){
				++i;
			}
			if(i == strlen(c) - 1){
				if(c[i] == '8') ++dem;
			}
		}
		int cnt = 0;
		int check = 0;
		for(int i = 0; i < strlen(c); i++){
			int rev = c[i] - '0';
			cnt += rev;
		}
		if(cnt % 10 == 0) check = 1;
		if(check && tn(c,strlen(c)) && dem == 2) printf("YES\n");
		else printf("NO\n");
	}
}
