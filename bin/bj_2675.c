#include<stdio.h>
#include<string.h>

int main(){
	int a, b, c, len1, len2;
	char cha1[20] = {0, };
	char cha2[20] = {0, };
	
	len1 = 0;
	len2 = 0;
	
	scanf("%d", &a);
	
	for(int i=0;i<a;i++){
		scanf("%d", &b);
		scanf("%s", cha1);
		len1 = strlen(cha1);
		for(int j=0;cha1[j]!='\0';j++){
			for(int j1=0;j1<b;j1++){
				printf("%c", cha1[j]);
			}
		}
		printf("\n");
	}
	
}

