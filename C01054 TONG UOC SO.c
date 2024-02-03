#include <stdio.h>
#include <math.h>

int main(){
	int cnt = 0;
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d", &n);
		for(int i = 2; i <= sqrt(n); i++){
			int dem = 0;
			if(n % i == 0){
				while(n % i  == 0){
					++dem;
					n/=i;
				}
			}
			cnt += dem * i;
		}
		if(n != 1) cnt += n; 
	}
	printf("%d", cnt);
}
