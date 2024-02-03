#include <stdio.h>
int max(int a, int b){
	if(a < b) return b;
	else return a;
}
int check[100000];
int dem[100000];
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		int max1 = -1e9;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			check[a[i]] = 1;
			++dem[a[i]];
			max1 = max(max1, dem[a[i]]);
		} 

		for(int i = 0; i < n; i++){
			if(check[a[i]]){
				if(dem[a[i]] == max1) printf("%d ", a[i]);
				check[a[i]] = 0;
			}
			
		}
		for(int i = 0; i < n; i++){
			dem[a[i]] = 0;
			check[a[i]] = 1;
		} 
		printf("\n");
	}
	
}