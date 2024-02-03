#include <stdio.h>
#include <math.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
	int can = sqrt(n);
	if(can * can == n) printf("YES\n");
	else printf("NO\n");
	}
	
}