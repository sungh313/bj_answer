#include<stdio.h>
#include<string.h>

int main(){
	int a, i, j, len, score, oflag, bsum; 	//변수 선언(oflag = 가중치)
	scanf("%d", &a);						//케이스 개수 받음
	char ox[81] = {0};						//문자열 저장할 배열ox 선언(81칸)
	
	score = 0;
	oflag = 0; 
	len = 0;					//변수 초기화
	bsum = 0;								//변수 초기화

	for(i=0;i<a;i++){						//테스트 개수 만큼 실행
		scanf("%s", ox);					//문자열 받음
		score = 0;
		oflag = 0;					//점수(score)와 가중치(oflag) 초기화
		len = strlen(ox);						//문자열 길이 구함
		for(j=0;j<len;j++){						//문자열 길이만큼 실행
			if(ox[j]==79 || ox[j] == 111){		//ASCII코드에서 79는 O, 111은 o(소문자)인데 혹시 싶어서 넣어봤습니다
				score = score + 1 + oflag;		//만약에 O면 점수를 1 올리고 가중치도 더함
				oflag  = oflag+1;				//가중치 +1
			}
			else if(ox[j]==88 || ox[j] == 120){	//ASCII코드에서 88은 X, 120은 x(소문자)
				oflag = 0;						//가중치 초기화
			}
		}
		printf("%d\n", score);				//점수 출력 이상하게 점수가 초기화가 안되서 이전 점수에서 빼는 형식입니다.					//이전점수 저장
		ox[0] = '\0';							//배열 초기화
	}
	return 0;
}

