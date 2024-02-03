#include <stdio.h>

void swap(int a, int b){
	a=a-b;
	b=b+a;
	a=b-a;
}

int main(){
	int n;
	int cnt = 0;
	int TH = 0;

		scanf ("%d", &n);
		int so[n];
		for (int i=0; i<n; i++){
			scanf ("%d", &so[i]);
		}
		for (int i=0; i<n; i++){
							
			for (int j=0; j<n-1-i; j++){
            
			    if (so[j]>so[j+1]){
				   so[j]=so[j]-so[j+1];
				   so[j+1]=so[j+1]+so[j];
				   so[j]=so[j+1]-so[j];
				   TH = 1;
			    }	
		    }
		if (TH == 1){
			cnt++;
			printf ("Step %d: ", cnt);
			for (int i=0; i<n; i++){
			    printf ("%d ", so[i]);
			}
			TH = 0;
		}	
		printf ("\n");	
		
		
		}
		
	return 0;
}
