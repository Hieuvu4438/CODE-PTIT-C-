#include <stdio.h>
#include <math.h>

int fibo(long long n){
   if(n == 0 || n == 1){
      return 1;
   }
   long long fn1 = 1, fn2 = 0, fn;
   for(int i = 2; i <= 92; i++){
      fn = fn1 + fn2;
      if(fn == n){
         return 1;
      }
      fn2 = fn1;
      fn1 = fn;
   }
   return 0;
}

int main(){
	int n;
		scanf("%d", &n);
		int a[n][n], cnt = n * n;
		int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
		int m = 0, i = 0;
		int c[10000];
		while(m < n * n){
			if(fibo(i)){
				c[m] = i;
				++m;
			}
			++i;
		}
		while(h1 <= h2 && c1 <= c2){
			for(int i = c1; i <= c2; i++){
				a[h1][i] = c[m];
				++m;
			}
			++h1;
			for(int i = h1; i <= h2; i++){
				a[i][c2] = c[m];
				++m;
			}
			--c2;
			if(c1 <= c2){
				for(int i = c2; i >= c1; i--){
					a[h2][i] = c[m];
					++m;
				}
				--h2;
			}
			if(h1 <= h2){
				for(int i = h2; i >= h1; i--){
					a[i][c1] = c[m];
					++m;
				}
				++c1;
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
}