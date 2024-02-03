#include <stdio.h>
#include <math.h>

int checknt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main(){
	int n; scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
		
	}
	int max = 0;
	int idx = 0;
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if(checknt(a[i][j])){
				++cnt;
			}
		}
		if(cnt > max){	
			max = cnt;
			idx = i;
		}
	}
	printf("%d\n", idx+1);
	for(int i = 0; i < n; i++){
		if(i == idx){
			for(int j = 0; j < n; j++){
				if(checknt(a[i][j])) printf("%d ", a[i][j]);
			}
			break;
		}
	}
}