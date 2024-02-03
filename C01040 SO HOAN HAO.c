#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	int sum = 1;
	int res = n;
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			sum += i;
		}
	}
	if(sum == res) printf("1");
	else printf("0");
}