#include <stdio.h>
#include <math.h>

int gcd(int a, int b){
	if(b==0)
		return a;
	return gcd(b, a%b);
} 
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	long long cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j=i+1; i < n; j++){
			if(gcd(a[i], a[j]) == 1) ++cnt;
		}
	}
	printf("%lld", cnt);
}
