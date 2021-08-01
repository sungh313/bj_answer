#include<stdio.h>

int main(){
	char num1[3] = {0, };
	char num2[3] = {0, };
	int i, flag;
	
	flag = 0;
	
	scanf("%s", num1);
	scanf("%s", num2);
	
	for(i=2;i>=0;i--){
		if(num1[i]>num2[i]){
			flag = 1;
			break;
		}
		else if(num1[i]<num2[i]){
			flag =2;
			break;
		}
	}
	
	for(int j=2;j>=0;j--){
		if(flag==1)	printf("%c", num1[j]);
		else printf("%c", num2[j]);
	}
}