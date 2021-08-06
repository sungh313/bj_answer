#include<stdio.h>
#include<string.h>


int main(){
	int t, h, w, n, y, x;
	
	scanf("%d", &t);
	
	for(int i=0;i<t;i++){
		h = 0;
		w = 0;
		n = 0;
		x = 0;
		y = 0;
		scanf("%d %d %d", &h, &w, &n);
		
		if(n%h==0){
			x = n/h;
			y = h;
		}
		else{
			x = n/h + 1;
			y = n%h;
		}
		
		if(x/10==0) printf("%d0%d\n",y,x);
		else printf("%d%d\n",y,x);
	}
}