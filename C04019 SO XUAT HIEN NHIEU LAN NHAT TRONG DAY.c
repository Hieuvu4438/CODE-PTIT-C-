#include <stdio.h>
int max1(int a, int b){
	if(a < b) return b;
	else return a;
}
int dem[100005] = {0};
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			++dem[a[i]];
		}
		int max=-1e9;
		for(int i = 0; i < n; i++){
			max = max1(max, dem[a[i]]);
		}
		int check = 1;
		for(int i = 0; i < n; i++){
			if(check){
				if(max == dem[a[i]]) printf("%d ", a[i]);
				check = 0;
			}
		}
		printf("\n");
	}
} 
