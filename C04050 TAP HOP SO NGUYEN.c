#include <stdio.h>

int dem[100000];
int dem1[100000];
void sort(int a[], int n){
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
	int n, m; scanf("%d%d", &n, &m);
	int a[n];
	int b[m];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		dem[a[i]] = 1;
	} 
	for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
		dem1[b[i]] = 1;
	}
	sort(a,n);
	sort(b,n); 
	int c[1000];
	int k = 0;
	for(int i = 0; i < m; i++){
		if(dem[b[i]]) c[k++] = b[i];
	}
	sort(c,k);
	for(int i = 0; i < k; i++){
		printf("%d ", c[i]);
	}
	printf("\n");
	for(int i = 0; i < n; i++){
		if(dem1[a[i]] != 1) printf("%d ", a[i]);
		
	}
	printf("\n"); 
	for(int i = 0; i < m; i++){
		if(dem[b[i]] != 1) printf("%d ", b[i]);
	}
	printf("\n");
	
}