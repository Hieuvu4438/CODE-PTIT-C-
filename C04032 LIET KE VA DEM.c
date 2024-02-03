#include <stdio.h>

int increase(int n){
	while(n){
		int n1 = n % 10;
		n /= 10;
		int n2 = n % 10;
		if(n1 < n2) return 0;
	}
	return 1;
}
int dem[100005];
int check[100005];
int main(){
	char s[1000];
	while(scanf("%s",s) != -1){
		int n = 0;
		int a[n];
		strcpy(a[n++],s);
		for(int i = 0; i < n; i++){
			if(increase(a[i])){
				check[a[i]] = 1;
				++dem[a[i]];
			}
		}
		for(int i = 0; i < 100005; i++){
			if(check[i]) printf("%d %d\n", i, dem[a[i]]);
		}
		
	}
	
}
