#include <stdio.h>
#include <math.h>
int main(){
	int n; scanf("%d", &n);
	int dem = 0;
	long long f1=1, f2=0;
	long long fn = 0;
	for(int i = 0; i <= 92; i++){
		printf("%d ", fn);
		
		f2 = f1;
		f1 = fn;
		fn = f1 + f2;
		++dem;
		if(dem==n) break;
	}
}