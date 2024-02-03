#include <stdio.h>

int dem[100005];
int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		++dem[a[i]];
	}
	for(int i = 0; i < n; i++){
		if(dem[a[i]]){
			printf("%d ", a[i]);
			dem[a[i]] = 0;
		}
	}
	
}