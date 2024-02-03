#include <stdio.h>
#include <math.h>
int a[1000001];
int main(){
	int n;
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		
		int k = 0;
		for(int i = 0; i < n; i++)
		{
		if(a[i] != a[n-i-1])
			k = 1;	
		} 
		if(k == 1) 
			printf("NO\n");
		else
		{
			printf("YES\n");
		} 
		k = 0;
	}
	
}
