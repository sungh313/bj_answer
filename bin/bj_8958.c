#include<stdio.h>
#include<string.h>
#include<malloc.h>

int main(){
	int a, i, j, len, score, oflag, bsum;
	scanf("%d", &a);
	char* ox;
	char* gee();
	
	char *txt;
	bsum = 0;

	for(i=0;i<a;i++){
		ox = gee();
		score, oflag = 0;
		len = strlen(ox);
		
		for(j=0;j<len;j++){
			strncpy(txt, ox+j, 1);
			
			if(strcmp("O", txt)){
				oflag = 0;
			}
			else{
				score = score + 1 + oflag;
				oflag  = oflag+1;
			}
		}
		
		printf("%d\n", score-bsum);
		bsum = score;
	}
}

char* gee(){
	char* os_s = (char*)malloc(80);
	scanf("%s", os_s);
	return os_s;
}
