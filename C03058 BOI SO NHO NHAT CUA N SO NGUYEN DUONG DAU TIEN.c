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

int bcnn(int a, int b){
   return a * b / ucln(a, b); 
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int cnt = 1;
		for(int i = 1; i <= n; i++){
			cnt = bcnn(cnt, i);
		}
		printf("%d\n", cnt);
	}
}