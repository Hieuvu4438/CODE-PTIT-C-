#include <stdio.h>
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
		int cnt = 0;
		for(int i = 1; i < n; i++){
			if(a[i] == a[i-1]){
				++cnt;
			}
		}
		printf("%d\n", cnt);
	}
}

