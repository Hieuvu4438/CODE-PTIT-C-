#include <stdio.h>
int main(){
	long long n,i,j;
	scanf("%lld",&n);
	long long A[n];
	long long B[n];
	A[0]=1;
	B[0]=1;
	A[1]=1;
	if (n>=1)
		printf("%lld\n",A[0]);
	if (n>=2)
		printf("%lld %lld\n",A[0],A[1]);
	for (i=2;i<n;i++)
	{
		printf("%lld ",B[0]);
		for (j=1;j<i;j++)
		{
			B[j]=A[j-1]+A[j];
			printf("%lld ",B[j]);
		}
		B[i]=1;
		printf("%lld ",B[i]);
		printf("\n");
		for (j=0;j<=i;j++)
		A[j]=B[j];
	}
	return 0;
}
