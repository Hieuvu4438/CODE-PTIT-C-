#include <stdio.h>
int check[100005] ={1};
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[1000];
		int m = 0;
		int cnt = 1;
		while(n){
			int res = n % 10;
			if(res == 0 || res == 8 || res == 9){
				res = 0;
				a[m++] = res;
			} 
			else if(res == 1){
				res = 1;
				a[m++] = res;
			} 
			else{
				printf("INVALID");
				cnt = 0;
				break;
			} 
			n/=10;
		}
		int idx = 0;
		int dem = 1;
		if(cnt){
			for(int i = m - 1; i >= 0; i--){
				if(a[m-1] != 0){
					printf("%d", a[i]);
				}
				else{
					for(int j = m - 2; j >= 0; j--){
						if(a[j] != 0){
							idx = j;
							break;
						}
						else ++dem;	
					}
					if(dem == m){
						printf("0");
						break;
					}
					else{
						for(int j = idx; j >= 0; j--){
							printf("%d", a[j]);
						}
						break;
					}
				}
		}
		}
		printf("\n"); 
		
	}
}