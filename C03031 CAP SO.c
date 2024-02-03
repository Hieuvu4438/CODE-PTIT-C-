#include <stdio.h>
#include <math.h>

int ucln(int a, int b){
   while(b != 0){
      int r = a % b;
      a = b;
      b = r;
   }
   return a;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long a, b, c, d;
		scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
		if(ucln(a,b) == ucln(c,d)) printf("YES\n");
		else printf("NO\n");
	}
}