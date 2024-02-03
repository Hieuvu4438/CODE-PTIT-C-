#include <stdio.h>
#include <math.h>
long long gcd(long long a, long long b){
	if(b==0) return a;
	else 
		return gcd(b, a % b);
}
long long lcm(long long a, long long b){
	return a*b/gcd(a,b);
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d\n %d", gcd(a,b), lcm(a,b));
}
