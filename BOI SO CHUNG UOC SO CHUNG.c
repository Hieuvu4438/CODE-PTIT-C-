#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b;
		scanf("%lld %lld", &a, &b);
		long long x = a * b;
		while( a * b != 0 ){
			if( a > b ){
				a = a % b;
			}
			else b = b % a;
		}
		printf("%lld %lld\n",  x / (a + b), a + b);
	}
}
