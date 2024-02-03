#include <stdio.h>
#include <math.h>
//CACH 1: 

//int main(){
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int a[n];
//	for(int i = 0; i < n; i++){
//		scanf("%d", &a[i]);
//	}
//	long long res = -1e18;
//	int idx;
//	for(int i = 0; i <= n - k; i++){
//		long long sum = 0;
//		for(int j = 0; j < k; j++){
//			sum += a[i+j];
//			}
//			if(sum >= res){
//				res = sum;
//				idx = i;
//		}
//	}
//	printf("%lld\n", res);
//	for(int i = 0; i < k; i++){
//		printf("%d ", a[i+idx]);
//	}
//}

//CACH 2:
int main(){
	int n,k;
	scanf("%d%d", &n, &k);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	long long res = 0, idx = 0, sum = 0;
	for(int i = 0; i < k; i++) sum += a[i];
	res = sum;
	for(int i = 1; i < n- k +1; i++){
		sum = sum - a[i-1] + a[i + k - 1];
		if(sum > res){
			res = sum;
			idx = i;
		}
	}
	printf("%lld\n", res);
	for(int i = 0; i < k; i++){
		printf("%d ",a[i+idx]);
	}
	
}
