#include<stdio.h>

int main(){
	int a, i, max;
	float sum;
	scanf("%d", &a);
	
	int ar[a];
	sum, max = 0;
	
	for(i=0;i<a;i++){
		scanf("%d", &ar[i]);
	}
	
	for(i=0;i<a;i++){
		if(max<ar[i]){
			max = ar[i];
			//printf("max = %d, i = %d\n", max, i);
		}
	}
	for(i=0;i<a;i++){
		sum = sum + (float)ar[i]/(float)max*100;
		//printf("값 = %f, sum = %f \n", (float)ar[i]/(float)max*100, sum);
	}
	//printf("%d %f\n", i, sum);
	printf("%f\n", (float)sum/(float)a);
}