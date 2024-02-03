#include <stdio.h>

int dem[1000005];
int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		++dem[a[i]];
	} 
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(dem[a[i]] > 1){
			printf("%d ", a[i]);
			dem[a[i]] = 0;
		} 
		else ++cnt;
	}
	if(cnt == n) printf("0");
	
}