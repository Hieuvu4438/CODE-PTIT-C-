#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int sum = 0;
		int a;
		scanf("%d", &a);
		while(a>0){
			sum += a%10;
			a/=10;
		}
		if(sum % 10 == 0){
		printf("YES");
		}
		
		else{
			printf("NO");
		}
	}
	return 0;
	
}
