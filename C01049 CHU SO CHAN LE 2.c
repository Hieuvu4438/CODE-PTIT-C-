#include <stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
	int demle=0, demchan =0;
	while(n){
		int rev = n % 10;
		if(rev % 2 == 0) ++demchan;
		else ++demle;
		n/=10;
	}
	printf("%d %d", demle, demchan);
	printf("\n");
	}
	
}