#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int res = 1e9+1, idx;
	for(int i = 0; i < n; i++){
		if(res >= a[i]){ //<= thi cap nhat thang cuoi cung
			res = a[i];
			idx = i;
		}
	}
	printf("%d ", idx);
}
