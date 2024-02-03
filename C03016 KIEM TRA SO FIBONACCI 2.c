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
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		if(fibo(n)) printf("YES\n");
		else printf("NO\n");
	}
}