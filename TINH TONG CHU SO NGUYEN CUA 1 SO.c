#include <stdio.h>
#include <math.h>
int main(){
	int t; int sum = 0;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		while(n!=0){
			sum += n % 10;
			n /= 10;
		}
		
	}
	printf("%d", sum);
	return 0;
}
