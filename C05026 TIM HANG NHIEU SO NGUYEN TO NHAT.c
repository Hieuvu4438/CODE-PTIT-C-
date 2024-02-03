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
	int sum = 0;
	int max = -1e9;
	int idx = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(checknt(a[i][j])){
				++sum;
			}
		}
		if(sum > max){
			max = sum;
			idx = i;
			sum = 0;
		}
	}
	printf("%d\n", idx);
	for(int i = 0; i < n; i++){
		if(i == idx){
			for(int j = 0; j < n; j++){
				if(checknt(a[i][j])) printf("%d ", a[i][j]);
			}
		}
	}
}