#include <stdio.h>
#include <math.h>

int count(int n){
	int res = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0){
			++res;
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n!=1)
		++res;
	return res;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", count(n));
	}
}
