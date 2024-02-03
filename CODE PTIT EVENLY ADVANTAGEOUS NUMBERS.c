#include <stdio.h>
#include <math.h>

int tach(int n){
	int chan = 0, le = 0;
	while(n){
		int tmp = n % 10;
		if(tmp % 2 == 0) ++chan;
		else if (tmp % 2 == 1) ++le;
		n /= 10;
	}
	if(chan > le) return 1;
	return 0;
}


int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(n % 2 == 0 && tach(n) == 1) printf ("YES\n");
		else printf("NO\n");
	}
	
}
