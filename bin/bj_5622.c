#include<stdio.h>
#include<string.h>

int main(){
	char dial[16];
	int len, times, sum;
	
	len = 0;
	times = 0;
	sum = 0;
	
	scanf("%s", dial);
	
	len = strlen(dial);
	
	for(int i=0;i<len;i++){
		if(dial[i]>=65 && dial[i]<=67)	sum += 3;
		else if(dial[i]>=68 && dial[i]<=70) sum += 4;
		else if(dial[i]>=71 && dial[i]<=73) sum += 5;
		else if(dial[i]>74 && dial[i]<=76) sum += 6;
		else if(dial[i]>=77 && dial[i]<=79) sum += 7;
		
		else if(dial[i]>=80 && dial[i]<=83) sum += 8;
		else if(dial[i]>=84 && dial[i]<=86) sum += 9;
		else if(dial[i]>=87 && dial[i]<=90) sum += 10;
	}
	
	printf("%d\n", sum);
}