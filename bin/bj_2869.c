#include<stdio.h>
#include<math.h>

int main(){
	int v, a, b;
	double cul;
	int cul2;
	
	scanf("%d %d %d", &a, &b, &v);
	
//	cul = (float)(v-b)/(a-b);
//	cul2 = ceil(cul);
	
	/* 
	int temp;
	if((v-b)%(a-b)==0)
		temp=(v-b)/(a-b);
	else
		temp=(v-b)/(a-b)+1;
	
	*/
	
	if((v-b)%(a-b)==0) printf("%d\n", (v-b)/(a-b));
	else printf("%d\n", (v-b)/(a-b)+1);
//	printf("%d\n", cul2);
}