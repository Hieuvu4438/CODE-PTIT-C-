#include<stdio.h>
#include<string.h>
#include<math.h>

int dau2cuoi(long long n){
		long long a = n%10;
		while( n >= 10 ){
			n = n/10;
		}
		long long b = n%10;
		if( a == 2 * b || b == a * 2){
			return 1;
		}
		return 0;
}

int daucuoi(long long a){
    long long x = a;
    long long b = 0;
    while(a > 0){
        b = (b + a % 10) * 10;
        a = a / 10;
    }
    b = b / 10;
    if(b - x == 0) return 1;
    else return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(dau2cuoi(n) == 0){
			printf("NO\n");
			continue;
		}
		n = n / 10;
		n = n % (int)pow(10, (int)log10(n));
		if(daucuoi(n) == 1) printf("YES\n");
		else printf("NO\n");
	}
}
