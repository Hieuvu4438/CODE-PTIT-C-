#include <stdio.h>
#include <math.h>

long long ucln(long long a, long long b){
	while(b != 0){
      long long r = a % b;
      a = b;
      b = r;
   }
   return a;
}

long long bcnn(long long a, long long b){
	return a * b / ucln(a,b);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long a, b; scanf("%lld%lld", &a, &b);
		long long cac1 = ucln(a,b);
		long long cac2 = bcnn(a,b);
		printf("%lld %lld", cac2, cac1);
		printf("\n");
	}
}