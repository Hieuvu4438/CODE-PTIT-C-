#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		int ok = 0;
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]) ok = 1;
			else ok = 0;
		}
		}
			if(ok == 1){
			printf("%d ", a[i]);
	}
}

