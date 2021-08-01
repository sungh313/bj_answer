#include<stdio.h>
#include<string.h>

int main(){
	char cha[102]={0, };
	int len, cnt;
	
	len = 0;
	cnt = 0;
	
	scanf("%s", cha);

	len = strlen(cha);
	
	for(int i=0;i<len;i++){
		if(cha[i]==99&&cha[i+1]==61)	i+=1;
		else if(cha[i]==99&&cha[i+1]==45)	i+=1;
		else if(cha[i]==100&&cha[i+1]==122&&cha[i+2]==61)	i+=2;
		else if(cha[i]==100&&cha[i+1]==45)	i+=1;
		else if(cha[i]==108&&cha[i+1]==106)	i+=1;
		else if(cha[i]==110&&cha[i+1]==106)	i+=1;
		else if(cha[i]==115&&cha[i+1]==61)	i+=1;
		else if(cha[i]==122&&cha[i+1]==61)	i+=1;
		cnt += 1;
	}
	
	printf("%d\n", cnt);
}