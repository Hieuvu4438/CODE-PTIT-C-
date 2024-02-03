#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int prime (long long n){
	if (n<2) return 1;
	for (long long i=2;i*i<=n;i++){
		if (n%i==0) return 1;
	}
	return 0;
}
int main(){
    long long n;
	scanf("%lld",&n);
	long long a[20],app[20],pos[20];
	int x=0;
	while (n>0){
		long long i=n%10;
		a[x]=i;
		x++;
		n/=10;
	}
	for (int i=0;i<x;i++){
		pos[i]=1;
		app[i]=1;
	}
	for (int i=x-1;i>=0;i--){
		for (int j=0;j<i;j++){
			if (a[i]==a[j]){
				app[i]++;
				pos[j]=0;
			}
		}
	}
	for (int i=x-1;i>=0;i--){
		if (pos[i]==1 && prime(a[i])==0){
			printf("%lld %lld\n",a[i],app[i]);
		}
	}
}
