#include<stdio.h>

int main(){
	int def, prod, pric;
	long sale;
	
	sale = 1;
	
	scanf("%d %d %d", &def, &prod, &pric);
	
	if(pric>prod){
		sale = def/(pric-prod);
		printf("%ld\n", sale+1);
	}
	else printf("-1\n");
}