#include <stdio.h>
void sort(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[i]){
				int temp =  a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		int m = 0;
		int a[m];
		while(n != 0){
			int rev = n % 10;
			a[m] = rev;
			m++;
			n /= 10;
		}
		sort(a,m);
		for(int i = 0; i < m; i++){
			printf("%d ", a[i]);
		}
	}
}