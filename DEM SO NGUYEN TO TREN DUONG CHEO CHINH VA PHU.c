#include <stdio.h>
int nt(int n){
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
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(nt(a[i][i])) ++cnt;
		if(nt(a[i][n-i-1])) ++cnt;
	}
	if(a[n/2][n/2]) --cnt;
	printf("%d", cnt);
}

// Dem so nguyen to 2:

int p[10001];
void sieve(){
	for(int i = 0; i <= 10000; i++)
		p[i] = 1;
	p[0] = p[1] = 0;
	for(int i = 2; i<= 100; i++){
		if(p[i]){
			for(int j = i * i; j <= 10000; j+=i)
				p[j] = 0;
		}
	}
}

int main(){
	sieve();
	int n; scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(p[a[i][i]]){
			++cnt; p[a[i][i]] = 0;
		}
		if(p[a[i][n-i-1]]){
			++cnt; p[a[i][n-i-1]] = 0;
		}
	}
	printf("%d", cnt);
}
