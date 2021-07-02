#include<stdio.h>
int main(){
	int ar1[2];
	int i;
	
	for(i=0;i<3;i++){
		scanf("%d", &ar1[i]);
	}
	
	for(i=0;i<3;i++){
		printf("%d", ar1[i]);
	}
}