#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i< n; i++){
		scanf("%d", &a[i]);
}
	int cntchan = 0, cntle = 0;
	int chan[cntchan], le[cntle];
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			++cntchan;
			chan[++cntchan];
		}
		else{
			++cntle;
			le[++cntle];
		}
}
	printf("%d %d", chan, le);
}
