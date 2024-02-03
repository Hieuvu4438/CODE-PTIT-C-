#include <stdio.h>


int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a,b,c,d; scanf("%d%d%d%d", &a, &b, &c, &d);
		int chieurong = c - a;
		int chieudai = d - b;
		if(chieurong == chieudai) printf("YES\n");
		else printf("NO\n");
	}
	
	
}