#include <stdio.h>
void sx(int a[], int n){
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
	int n; scanf("%d", &n);
	int t[n], d[1000];
	for(int i = 0; i < n; i++){
		scanf("%d", &t[i]);
		scanf("%d", &d[t[i]]);
	}
	sx(t, n);
	int idx = t[0];
	int sum = 0;
	for(int i = 0; i < n; i++){
		idx += d[t[i]];
		if(idx > t[i+1]){
			idx = idx;
		}
		else{
			idx = t[i+1];
		}
	}
	printf("%d", idx);
}