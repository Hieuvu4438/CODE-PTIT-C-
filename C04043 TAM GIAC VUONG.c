#include <stdio.h>
void sort(long long a[], int n){
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

int check(long long a[], int n){
	for(int i = n - 1; i >= 2; i--){
		int l = 0, r = i - 1;
		while(l < r){
			if(a[l] + a[r] == a[i]) return 1;
			else if(a[l] + a[r] > a[i]) --r;
			else ++l;
		}
	}
	return 0;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		long long a[n];
		for(int i = 0; i < n; i++){
			long long x;
			scanf("%lld", &x);
			a[i] =  x * x;
		}
		sort(a, n);
		if(check(a,n)) printf("YES\n");
		else printf("NO\n");
	}
}
