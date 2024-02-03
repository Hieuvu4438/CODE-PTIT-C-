#include <stdio.h>

int check(long long n){
	while(n>=10){
		int sau = n % 10;
		n/=10;
		int truoc = n % 10;
		if(sau >= truoc) return 0;
		
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long a, b; scanf("%lld%lld", &a, &b);
		int dem = 0;
		for (int i = a; i <= b; i++){
			if(check(i)) ++dem;
		}
		printf("%d\n", dem);
	}
}