#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//전역변수
//
//
char endString[100] = "";
//인터페이스
char* recursive(char w[]);
int getBalancedIndex(char w[]);
bool isValidString(char u[]);
char* reArrange(char u[]);
int main() {
	int n;
	char w[n];//초기 코드소스 입력값
	char* r;//최종 리턴값은 포인터로 변경
	scanf("%s", w);
	r = recursive(w);
	//printf("디버그 %s\n", r);
	if(w == r) {
		printf("올바른 괄호문자열 입니다. %s", r);
	}else{
		printf("잘못된 괄호문자열 입니다. 입력값 %s, 출력값 %s", w, r);
	}
	return 0;
}
char* recursive(char w[]) {
	if(w=="") {
		return strcat(w,endString);
	}else{
		int balancedIndex = getBalancedIndex(w);
	}
	return strcat(w,endString);
}
char* reArrange(char u[]) {
	int n;
	char arrangeString[n];
		
	return arrangeString;
}
bool isValidString(char u[]) {
	
	return true;
}
int getBalancedIndex(char w[]) {
	int index = 0, balancedCount = 0, n;
	for(int i=0; i<strlen(w); i++) {
		char tmpChar[n];
		strncpy(tmpChar, w, i);
		printf("%s\t", tmpChar);
	}
	return index;
}