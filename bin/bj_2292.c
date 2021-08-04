#include<stdio.h>

int main(){
	int cnt, cnt3, flag;
	long cell, sum1, sum2;
	
	cnt = 0;
	int i = 0;
	sum1 = 0;
	sum2 = 0;
	flag = 0;
	cnt3 = 0;
	
	scanf("%ld", &cell);
	
//	for(cell=1;cell<1000;cell++){
		if(cell==1) cnt = 1;
		else if(cell<8) cnt = 2;
		else{
			flag = 1;
			sum1 = 7;
			cnt3 = 3;
			while(flag==1){
				sum2 = (6*cnt3)+1;
				if(cell>sum1&&sum2>=cell){
					cnt = 3 + i;
					
					flag=0;
				}
				cnt3 = cnt3+(3+i);
				sum1 = sum2;
			//	printf("%d", i);
				i++;
			}
		}
	//	printf("쫑\n");
		printf("%d\n", cnt);
//	}
	
}