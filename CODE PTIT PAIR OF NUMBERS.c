#include <stdio.h>
#include <math.h>
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d%d", &a, &b);
		int c, d; scanf("%d%d", &c, &d);
		if(gcd(a,b) == gcd(c,d)) printf("YES\n");
		else printf("NO\n");
	}

}
