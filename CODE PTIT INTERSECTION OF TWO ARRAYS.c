#include <stdio.h>
void sapxep(int m[], int size){
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if(m[i] > m[j]){
				int temp = m[i];
				m[i] = m[j];
				m[j] = temp;
			}
		}
	}
	return sapxep;
}
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n];
	int b[m];
	int c[100];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	sapxep(a, n); sapxep(b, m);
	int cnt[10001] = {0};
	for(int i = 0; i < n; i++){
		cnt[a[i]] = 1;
	}
	for(int i = 0; i < m ; i++){
		if(cnt[b[i]] == 1){
			printf("%d ", b[i]);
			cnt[b[i]] = 0;
		}
	}
}

