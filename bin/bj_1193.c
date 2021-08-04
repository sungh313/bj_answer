#include<stdio.h>

int main(){
	int num, row, col, max_row, max_col, flag;
	
	row = 1;
	col = 0;
	max_row = 1;
	max_col = 1;
	flag = 1;
	
	scanf("%d", &num);
	
	for(int i=0;i<num;i++){
		if(flag==1){
			if(row==1){
				col += 1;
				flag = 0;
			}
			else{
				col += 1;
				row -= 1;
			}
		}
		else if(flag==0){
			if(col==1){
				row+=1;
				flag = 1;
			}
			else{
				col -= 1;
				row += 1;
			}
		}
	}	
	printf("%d/%d\n", col, row);
}