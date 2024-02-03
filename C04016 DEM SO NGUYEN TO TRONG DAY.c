#include <stdio.h>
#include <math.h>

int dem[100005];
int checknt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

void sort(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[i]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main(){
	int t; scanf("%d", &t);
	for(int k = 1; k <= t; k++){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			++dem[a[i]];
		}
		sort(a,n);
		printf("Test %d:\n", k);
		for(int i = 0; i < n; i++){
			if(checknt(a[i])){
				if(dem[a[i]]){
					printf("%d xuat hien %d lan\n", a[i], dem[a[i]]);
					dem[a[i]] = 0;
				}
				
			}
		}
	}
}