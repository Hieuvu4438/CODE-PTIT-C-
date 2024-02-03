#include <stdio.h>

long long check(long long n){
	if(n == 1 || n == 0)
		return 1;
	long long n1 = 0, n2 = 1;
	for(int i = 3; i <= 94; i++){
		long long a = n1 + n2;
		if(a == n) return 1;
		n2 = n1;
		n1 = a;
	}
	return 0;
} 

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		long long a;
		scanf("%lld", &a);
		if(check(a)) printf("YES\n");
		else printf("NO\n");
	}
}
