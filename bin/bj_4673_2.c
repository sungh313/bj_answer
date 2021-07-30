#include<stdio.h>

int main()
{
	int i, res, digit;
	int p_1, p_2;

	res = 0;
	digit = 0;
	
	int lange[10000] = {0, };
	
	for(i=1;res<10000;i++){
		
		
		if(((i%10000)/1000) != 0)		digit = 4;
		else if(((i%1000)/100) != 0)	digit = 3;
		else if(((i%100)/10) != 0)		digit = 2;
		else if((i%10) != 0)			digit = 1;
		
		res = i;
		for(int j=digit;j>0;j--){
			p_1 = 1;
			p_2 = 1;
			
			for(int y=0;y<j;y++){
				p_1 = p_1 * 10;
			}
			p_2 = p_1 / 10;
			if(p_2==0) p_2 = 1;
			
			res = res + ((i%p_1)/p_2);
		}
		
		lange[res] = 1;
		if(res==9999) printf("%d", i);
		
		//printf("%d\n", res);
	}
	
	for(int a = 1;a<9994;a++){
		if(lange[a] == 0)	printf("%d \n", a);
	}
	

}