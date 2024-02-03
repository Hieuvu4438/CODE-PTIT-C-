#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// DEM SO LAN XUAT HIEN KY TU (Chi dung voi ky tu in thuong or in hoa)
int main(){
	char c[1005];
	scanf("%s", c);
	int cnt[26] = {0};
	for(int i = 0; i < strlen(c); i++){
		cnt[c[i]-'a']++;
	}
	for(int i = 0; i < 26; i++){
		if(cnt[i] != 0){
			printf("%c %d\n",(i+'a'), cnt[i]);
		}
	}
}

// DEM SO LAN XUAT HIEN KY TU (Dung cho ca ky tu in thuong lan in hoa cung 1 luc)

int main(){
	char c[1005];
	gets(c);
	int cnt[256] = {0};
	for(int i = 0; i < strlen(c); i++){
		cnt[(int)c[i]]++;
	}
	for(int i = 0; i < 256; i++){
		if(cnt[i]!=0){
			printf("%c %d\n", i, cnt[i]);
		}
	}
}
