#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int cnt[30001] = {0};
		for(int i = 0; i < n; i++){
			cnt[a[i]]++;
		}
		int res = 0;
		for(int i = 0; i < n; i++){
			if(res < cnt[a[i]]) res = cnt[a[i]];
		}
		for(int i = 0; i < n; i++){
			if(res==cnt[a[i]]){
				printf("%d ", a[i]);
				cnt[a[i]] = 0;
			}
		}
		printf("\n");
	}
} 
