#include <stdio.h>
#include <math.h>

int check(int n){
	int cnt = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			if(i % 2 == 0){
				cnt++;
			}
			if(i != n/i && (n/i) % 2 == 0){
				cnt++;
			}	
		}
	}
		return cnt;
}
	


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", check(n));
	}
}
