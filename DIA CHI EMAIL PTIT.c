#include<stdio.h>
#include<string.h>
int main(){
	char s[50],x[13]="@ptit.edu.vn";
	gets(s);
	int k=strlen(s),t=0;
	for (int i=0; i<strlen(s);i++)
	 if (((s[i-1]==' ')&&(s[i]!=' '))||((i==0)&&(s[i]!=' '))){
	   if ((s[i]>=65)&&(s[i]<=90))
	printf("%c",s[i]+32); else
	printf("%c",s[i]);
	   t=i+1;
	}
	for (int i=t;i<k;i++){
	  if ((s[i]>=65)&&(s[i]<=90))
	    printf("%c",s[i]+32); else
		 printf("%c",s[i]);
	}	
	for (int i=0;i<12;i++)
	printf("%c",x[i]);

	
}
