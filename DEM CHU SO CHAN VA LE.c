#include <stdio.h>
#include <math.h>

//DEM SO CHAN SO LE:
void solve(int n){
	int c = 0, l = 0;
	while(n){
		int a = n % 10;
		if(a % 2 == 0) ++c;
		else ++l;
		n /= 10;
	}
	printf("%d %d", c, l);
}

int main(){
	int n;
	scanf("%d", &n);
	solve(n);
}
