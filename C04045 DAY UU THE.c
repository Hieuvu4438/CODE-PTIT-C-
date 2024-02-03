#include <stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			++dem;
		}
		int demchan = 0, demle = 0;
		for(int i = 0; i < n; i++){
			if(a[i] % 2 == 0) ++demchan;
			else ++demle;
		}
		if(demchan > demle && dem % 2 == 0) printf("YES\n");
		else if(demle > demchan && dem % 2 == 1) printf("YES\n");
		else printf("NO\n");
	}