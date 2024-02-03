#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
		int cnt = 0;
		int n; scanf("%d", &n);
		for(int i = 0; i < 10; i++){
			cnt += n/a[i];
			n %= a[i];
		}
		printf("%d\n", cnt);
	}
}
