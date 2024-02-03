#include <stdio.h>
#include <math.h>

int ucln(long long a, long long b){
   while(b != 0){
      int r = a % b;
      a = b;
      b = r;
   }
   return a;
}

int bcnn(long long a, long long b){
   return a * b / ucln(a, b); 
}

int main(){
	long long a, b; scanf("%lld%lld", &a, &b);
	
	printf("%d\n%d", ucln(a,b), bcnn(a,b));
}