#include <stdio.h>
int cmp(const void *a, const void *b){
	return *(int*)a - *(int*)b;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		qsort(a, n, sizeof(int), cmp);
		int cnt = 0, res = 2e9+10001;
		for(int i = 1; i < n; i++){
			if(a[i] - a[i-1] < res){
				res = a[i] - a[i-1];
				cnt = 1;
			}
			else if(a[i] - a[i-1] == res){
				++cnt;
			}
		}
		printf("%d %d\n", res, cnt);
	}
}