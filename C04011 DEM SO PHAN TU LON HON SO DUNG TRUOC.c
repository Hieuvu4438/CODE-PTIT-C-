#include <stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int dem = 0;
		for(int i = n - 1; i >= 0; i--){
			int check = 1;
			for(int j = 0; j < i; j++){
				if(a[j] > a[i]) check = 0;
			}
			if(check) ++dem;
		}
		printf("%d\n", dem);
	}
}