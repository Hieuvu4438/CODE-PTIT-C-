#include <stdio.h>
#include <math.h>
int dem[100005];
int cnt[100005];
int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		++dem[a[i]];
		cnt[a[i]] = 1;
	}
	for(int i = 0; i < n; i++){
		if(cnt[a[i]]){
			printf("%d %d\n", a[i], dem[a[i]]);
			cnt[a[i]] = 0;
		}
	}
}
