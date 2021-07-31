#include<stdio.h>
#include<string.h>

int main(){
	char cha[1000000];
	int alp[26];
	int len, res, max, max2;
	max = 26;
	max2 = 0;
	
	scanf("%s", cha);
	len = strlen(cha);
//	printf("길이 : %d\n", len);
	for(int i=0;i<len;i++){
		if(cha[i]>96)	cha[i] = cha[i] - 32;
		res = cha[i]-65;
//		printf("%d \n", res);
		alp[res] += 1;
	}
	
//	for(int z=0;z<26;z++){
//		printf("%d ", alp[z]);
//	}
	
	for(int j=0;j<26;j++){
		if(alp[j]>alp[max] && alp[j]>0){
			max = j;
//			printf("최대값, %d, %d\n", j, alp[j]);
			max2 = 0;
		}
		else if(alp[max]==alp[j] && alp[j]>0){
			max2 += 1;
//			printf("동점 발생, %d\n", j);
		}
//		printf("j 값 %d,  %d\n", j, alp[j]);
		
	}
//	printf("최대값 max = %d \n", max2);
	if(max2<1)	printf("%c\n", max+65);
	else printf("?\n");
}