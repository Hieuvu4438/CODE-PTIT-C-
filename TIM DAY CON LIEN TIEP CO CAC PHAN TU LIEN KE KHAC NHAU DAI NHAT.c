#include <stdio.h>
#include <math.h>
long long max(long long a, long long b){
	return a < b? b:a;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int cnt = 1, res = 0;
	for(int i = 0; i < n; i++){
		if(a[i] != a[i-1]){
			++cnt;
		}
		else{
			cnt = 1;
		}
		res = max(res, cnt);
	}
	printf("%d", res);
}

