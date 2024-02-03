#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		scanf("%s", c);
		int check = 1;
		for(int i = 0; i < strlen(c); i++){
			if(c[0] == '0'){
				check = 0;
				break;
			}
			if(c[i] < '0' || c[i] >'9'){
				check = 0;
				break;
			}
		}
		if(check == 0) printf("INVALID\n");
		if(check){
			int check123 = 1;
			int d[strlen(c)];
			for(int i = 0; i < strlen(c); i++){
				d[i] = c[i] - '0';
			}
			int check1[100005] = {0};
			for(int i = 0; i < strlen(c); i++){
				check1[d[i]] = 1;
//				printf("%d %d\n", d[i], check1[d[i]]);
//				printf("%d ", d[i]);
			}
//			printf("\n");
			for(int i = 0; i < 10; i++){
				if(check1[i] == 0){
					check123 = 0;
					break;
				}
			}
			if(check123) printf("YES\n");
			else printf("NO\n");
			check123 = 1;
			check = 1;
			
		}
	}
}