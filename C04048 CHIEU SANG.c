#include <stdio.h>
#include <math.h>
int store[100005];
int store1[100005];
int main(){
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int a[m];
	for(int i = 0; i < m; i++){
		scanf("%d", &a[i]);
	}
	int dem = 0;
	for(int i = 0; i < m; i++){
		store[i] = a[i] - k;
		store1[i] = a[i] + k;
	}
	for(int i = 0; i < m; i++){
		if(i == 0){
			if(a[i] - k > 1){
//				++dem;
				int cnt = a[i] - k;
				while(cnt > 1){
					cnt = cnt - 2*k;
					++dem;
				}
			} 
		} 
		if(store1[i] - store[i+1] < 0){
//			++dem;
			int cnt = store1[i] - store[i+1];
			while(cnt < 0){
				++dem;
				cnt += 2*k;
			}
			
		} 
		if(i == m - 1){
			if(store1[i] < n){
				int cnt = store1[i];
				while(cnt < n){
					cnt += 2*k;
					++dem;
				}
			}
		}
		
	}
	printf("%d\n", dem);
}