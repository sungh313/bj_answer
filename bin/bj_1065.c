#include<stdio.h>

int main(){
	int j, digit, sum, res;
	
	scanf("%d", &j);
	
	int ar[1000] = {0, };
	
	for(int i=1;i<100;i++){
		if(i<10){
			ar[i] = 1;
			for(int j=0;j<10;j++){
				if(i+(j*2)<=9){
					sum = i * 100 + (i+j)*10 + i+2*j;
					ar[sum] = 1;
				}
				else break;
				//printf("%d    %d %d\n", sum, i, j);
			}
			for(int k=1;k<5;k++){
				if(i-(k*2)>=0){
					sum = i*100 + (i-k)*10 + i-2*k;
					ar[sum] = 1;
				}
				else break;
				//printf("%d    %d %d\n", sum, i, k);
			}
		}
		else ar[i] = 1;
	}
	
	res = 0;
	
	for(int a=1;a<=j;a++){
		if(ar[a] == 1){
			res = res + 1;
		}
		
	}
	printf("%d\n", res);
}