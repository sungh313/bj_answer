#include<stdio.h>
#include<string.h>

int main(){
	char str1[100];
	int digit[25];
	int i, len;
	
	scanf("%s", str1);
	
	len = strlen(str1);
	
	for(int j=97;j<123;j++){
		for(i=0;i<len;i++){
			if(str1[i]==j){
				digit[j-97] = i;
				break;
			}
			else digit[j-97] = -1;
		}
	}
	for(int k=0;k<26;k++){
		printf("%d ", digit[k]);
	}
}
