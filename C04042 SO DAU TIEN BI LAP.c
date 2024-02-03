#include <stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int check = 1;
		int dem = 0;
		for(int i = 0; i < n; i++){
			if(check){
				for(int j = i + 1; j < n; j++){
				if(a[i] == a[j]) ++dem;
				}
			}
			if(dem >= 1){
				printf("%d\n", a[i]);
				break;
			}
			
		}
		if(dem < 1) printf("NO\n");
		
	}
}
