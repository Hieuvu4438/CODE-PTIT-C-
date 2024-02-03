#include <stdio.h>

long long sum=1000000007;
long long F(int n)
{
    long long a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    long long i = 3, a;
    while (i <= n)
    {
        a = (a1 + a2)%sum;
        a1 = a2%sum;
        a2 = a%sum;
        i++;
    }
    return a;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
    	if(i == 0) printf("0 ");
    	else{
    		printf("%lld ",F(i));
    	}
    }
}	
