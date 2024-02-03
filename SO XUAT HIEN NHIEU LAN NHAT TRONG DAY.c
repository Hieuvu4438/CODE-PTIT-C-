#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		}
		int res = -1;
		for(int i = 0; i < n; i++){
			int cnt = 0;
			int temp;
			int idx;
			for(int j = 1; j < n; j++){
				if(a[i] == a[j]){
					++cnt;
					if(cnt > res){
						temp = cnt;
						res = cnt;
						a[idx] = a[i];
					} 
				}
			}
			if(temp == res){
				printf("%d ", a[idx]);
				cnt = 0;					
			}
		}
	}	
}
