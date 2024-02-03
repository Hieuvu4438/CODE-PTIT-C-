#include <stdio.h>
#include <math.h>
//SO LOC PHAT
int lp(int n){
	while(n!=0){
		int r = n % 10;
		if(r!=0 && r!=6 && r!=8)
			return 0;
		n/=10;
	}
	return 1;
} 

int main(){
	int a;
	scanf("%d", &a);
	printf("%d", lp(a));
}
//SO THUAN NGHICH VA LOC PHAT:

