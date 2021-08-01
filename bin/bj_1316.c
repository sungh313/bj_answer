#include<stdio.h>
#include<string.h>

int main(){
	int cnt, len, cnt1;
	char cha[102];
	int flag[102] = {0, };
	
	len = 0;
	cnt = 0;
	cnt1 = 0;
	
	scanf("%d", &cnt);	
	
	for(int i=0;i<cnt;i++){
		scanf("%s", cha);
		len = strlen(cha);
		
		for(int j=0;j<len;j++){
			for(int k=j+1;k<len;k++){
				if(cha[k]!=cha[k-1]){
					if(cha[j]==cha[k]){
						flag[i] = 1;
						break;
					}
				}
			}
		}
	}
	
	for(int l=0;l<cnt;l++){
		if(flag[l]==1)	cnt1 += 1;
	}
	printf("%d\n",cnt-cnt1);
}