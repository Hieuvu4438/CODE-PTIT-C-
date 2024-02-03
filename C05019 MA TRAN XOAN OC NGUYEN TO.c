#include <stdio.h>
#include <math.h>

int prime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
	int t; scanf("%d", &t);
	for(int k = 1; k <= t; k++){
		int n; scanf("%d", &n);
	    int a[n][n];
	    int X[10000], idx = 0, i = 0;
	    while(idx < n * n){
	        if(prime(i)){
	            X[idx] = i; ++idx;
	        }
	        ++i;
	    }
	    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
	    int dem = 0;
	    
	    while(h1 <= h2 && c1 <= c2){
	        for(int i = c1; i <= c2; i++){
	            a[h1][i] = X[dem]; ++dem;
	        }
	        ++h1;
	        for(int i = h1; i <= h2; i++){
	            a[i][c2] = X[dem]; ++dem;
	        }
	        --c2;
	        for(int i = c2; i >= c1; i--){
	            a[h2][i] = X[dem]; ++dem;
	        }
	        --h2;
	        for(int i = h2; i >= h1; i--){
	            a[i][c1] = X[dem]; ++dem;
	        }
	        ++c1;
	    }
	    printf("Test %d:\n",k);
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            printf("%d ", a[i][j]);
	        }
	        printf("\n");
	    }
	    printf("\n");
	}
    
    
}