#include <stdio.h>
#include <math.h>

int primeNumber(int n){
	for(int i = 2; i<= sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return n > 1;
}
int check(int a[], int n){
	for(int i = 0; i < n; i++){
			int cnt = 0;
		for(int j = i + 1; j < n; j++){
			if(a[i] == a[j]) ++cnt;
		}
		if(cnt == 1) return 1;	
	}	
	return 0;
}
int sapxep(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			if(primeNumber(a[i])){	
				printf("%d ", a[i]);	
			}
										
		}
			printf("\n");
	}
}
