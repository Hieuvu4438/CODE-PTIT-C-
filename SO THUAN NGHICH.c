#include <stdio.h>
#include <math.h>

int tn(long long n){
	long long rev = 0; int m = n;
	while (n!=0){
		rev = rev*10 + n%10;
		n/=10;
	}
	if(rev==m)
		return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(tn(n))
			printf("YES\n");
		else printf("NO\n");
	}
}
