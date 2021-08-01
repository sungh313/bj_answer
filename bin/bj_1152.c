#include<stdio.h>

int main(){
	char cha[1000002];
	int	cnt, i;
	
	cnt = 0;
	
	scanf("%[^\n]", cha);
	
	for(i=0;cha[i]!='\0';i++){
		if(i!=0 && cha[i]==' ') cnt += 1;
	}
	if(cha[i-1]==' ') printf("%d", cnt);
	else printf("%d", cnt+1);
}
