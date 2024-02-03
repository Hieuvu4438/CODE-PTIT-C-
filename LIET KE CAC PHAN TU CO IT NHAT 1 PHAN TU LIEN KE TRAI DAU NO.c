#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",  &a[i]);
	}
	for(int i= 0; i < n; i++){
		if(i==0 && a[0]*a[1]<0)	printf("%d ",a[0]);
		else if(i==n-1 && a[n-1]*a[n-2]<0) printf("%d ",a[n-1]);
		else if(a[i]*a[i-1]<0 || a[i]*a[i+1]<0) printf("%d ", a[i]);
	}
}
