#include<stdio.h>
#include<stdlib.h>

void nhap(int a[],int n)
{
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
}

int cmp(const void *a,const void *b){
	int x=*(int*)a;
	int y=*(int*)b;
	return x-y;
} 

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[100],b[100];
	nhap(a,m);
	nhap(b,n);	
	qsort(a,m,sizeof(int),cmp);
	qsort(b,n,sizeof(int),cmp);
	int c[100],d[100];
	int num1=0,num2=0;
	int count[1000]={0},count1[1000]={0};
	for(int i=0;i<m;i++) count[a[i]]++;
	for(int i=0;i<m;i++) 
	{
		if(count[a[i]]){
			c[num1++]=a[i];
			count[a[i]]=0;
		}
	}
	for(int i=0;i<n;i++) count1[b[i]]++;
	for(int i=0;i<n;i++) 
	{
		if(count1[b[i]]){
			d[num2++]=b[i];
			count1[b[i]]=0;
		}
	}

	int cnt[1000]={0};
	for(int i=0;i<num1;i++){
		cnt[c[i]]=1;
	}
	for(int i=0;i<num2;i++){
		cnt[d[i]]++;
	}
	for(int i=0;i<1000;i++){
		if(cnt[i]>1) printf("%d ",i);
	}
	printf("\n");
	for(int i=0;i<num1;i++)
		if(cnt[c[i]]==1) printf("%d ",c[i]);
	printf("\n");
	for(int i=0;i<num2;i++)
		if(cnt[d[i]]==1) printf("%d ",d[i]);	
	printf("\n");	
}