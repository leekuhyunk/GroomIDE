#include <stdio.h>
//전역변수
long Factorial = 1;
//long fact(int n);
long fact(int n);
int main() {
	int n;
	long Result;
	scanf("%d", &n);
	Result = fact(n);
	printf("%d 팩토리얼 = %ld", n, Result);
	return 0;
}

long fact(int n) {
	if(n==1) {
		return Factorial;
	}else{
		Factorial = Factorial * n;
		n = n - 1;
		return fact(n);//재귀함수를 호출해서 for반복문 역할.
	}
}