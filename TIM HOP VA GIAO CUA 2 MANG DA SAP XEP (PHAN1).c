#include <stdio.h>
#include <math.h>

int min(int a, int b){
	return a>b ? b : a;
}
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n], b[m];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < m; i++) scanf("%d", &b[i]);
	int giao[min(n,m)], hop[n+m];
	int i = 0, j = 0, g = 0, h = 0;
	while(i<n && j<m){
		if(a[i] == b[j]){
			giao[g] = a[i];
			hop[h] = a[i];
			++g, ++h;
			++i, ++j;
		}
		else if(a[i] > b[j]){
			hop[h++] = b[j++];
		}
		else{
			hop[h++] = a[i++];
		}
	}
	while(i<n){
		hop[h++] = a[i++];
	}
	while(j<m){
		hop[h++] = b[j++];
	}
	for(int i=0; i<h;i++) printf("%d ", hop[i]);
	printf("\n");
	for(int i = 0; i<g;i++) printf("%d ", giao[i]);
	
} 

