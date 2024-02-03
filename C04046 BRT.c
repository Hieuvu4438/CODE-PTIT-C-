#include <stdio.h>

long long a[100005];

long long min(long long a, long long b){
	if(a < b) return a;
	else return b;
	
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%d", &n);
		for(int i = 0; i < n; i++){
			scanf("%lld", &a[i]);
		}
		int dem = 0;
		long long min1 = 1e9;
		long long min2 = 0;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] > a[j]){
					min1 = min(min1, a[i] - a[j]);
					
				}
				else{
					min1 = min(min1, a[j] - a[i]);
					
				}
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] > a[j]){
					int rev = a[i] - a[j];
					if(rev == min1) ++dem;
				}
				else{
					int rev = a[j] - a[i];
					if(rev == min1) ++dem;
				}
			}
		}
		printf("%d %d\n", min1, dem);
	}
}
