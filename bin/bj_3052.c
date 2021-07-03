#include<stdio.h>

int main(){
	int ar1[11];
	int ar2[13] = {0, };
	int i, l, x, y;
	
	y = 0;
	l = 0;
	
	for(i=0;i<10;i++){
		scanf("%d", &ar1[i]);
	}
	
	for(i=0;i<10;i++){
		x = ar1[i]%42;
		
		//printf("%d\n", x);
		
		if(y==0){
			ar2[0] = x;
			y = 1;
			//printf("실행검증\n");
		}
		
		l = 0;
		while(l<y){
				if(ar2[l]!=x && l==(y-1)){
					ar2[y] = x;
					y = y+1;
					//printf("x=%d, y=%d, 배열값%d\n", x, y, ar2[y-1]);
					break;
				}
				else if(ar2[l]==x) {
					//printf("%d, eles문 실행\n", x);
					break;
				}
				l++;
				//printf("%d \n", l);
				//printf("x = %d, l = %d, y = %d\n", x, l, y);
		}
	}
	
	printf("%d\n", y);
	//for(i=0;i<y;i++){
	//	printf("%d\n", ar2[i]);
	//}
}