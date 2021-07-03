#include<stdio.h>
int main(){
	int ar1[10];
	int ar2[10] = {0, };
	int i, l, x, y;
	
	y = 0;
	
	for(i=0;i<10;i++){
		scanf("%d", &ar1[i]);
	}
	
	for(i=0;i<10;i++){
		x = ar1[i]%42;
		
		for(l=0;l<i;l++){
			if(ar2[l]!=x){
				ar2[i] = x;
				y = y+1;
				break;
			}
		}
	}
	
	printf("%d\n", y);
}