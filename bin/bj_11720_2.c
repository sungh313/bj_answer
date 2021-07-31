#include<stdio.h>

int main(){
	char ar[101];
	
	int cnt, a, sum;
	sum = 0;
	
	scanf("%d", &cnt);
	for(a=0;a<=cnt;a++){
		scanf("%c", &ar[a]);
	}
	printf("sum 값 %d\n", sum);
	for(int b = 1;b<=cnt;b++){
		if(ar[b]==48) sum += 0;
		else if(ar[b]==49) sum += 1;
		else if(ar[b]==50) sum += 2;
		else if(ar[b]==51) sum += 3;
		else if(ar[b]==52) sum += 4;
		else if(ar[b]==53) sum += 5;
		else if(ar[b]==54) sum += 6;
		else if(ar[b]==55) sum += 7;
		else if(ar[b]==56) sum += 8;
		else if(ar[b]==57) sum += 9;
	//	printf("%d차 값 %d,     더한건 %c\n", b, sum, ar[b]);
	}
	
	printf("%d\n", sum);
}