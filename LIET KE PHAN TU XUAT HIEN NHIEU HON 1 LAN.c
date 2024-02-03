#include <stdio.h>
int dem[100005];
int dem1[100005];
int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		++dem[a[i]];
		++dem1[a[i]];
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(dem1[a[i]] > 1){
			++cnt;
			dem1[a[i]] = 0;
		}
	}
	printf("%d\n", cnt);
	for(int i = 0; i < n; i++){
		if(dem[a[i]] > 1){
			printf("%d ", a[i]);
			dem[a[i]] = 0;
		}
	}
}