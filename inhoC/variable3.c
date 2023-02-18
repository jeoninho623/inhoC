#include <stdio.h>

int main4() {
	//printf("작성자 : 전인호\n작성날짜 : 2023-02-18 \n기능 : printf로 문자열 출력");
	// 이름, 년도, 월, 일, f ==> 변수
	// 문자열[] 변수 : 이름		%s
	// 정수 변수 : 년도, 월, 일		%d
	// 문자변수 : f		%c

	char name[] = "홍길동";
	printf("작성자: %s\n", name);
	int year = 2023;
	int month = 2;
	int day = 18;
	printf("작성날짜: %d-%d-%d\n", year, month, day);
	char spel = 'f';						// 문자 여러개는 큰 따옴표 한 개는 작은따옴표로 선언하기.
	printf("기능: print%c로 문자열 출력",spel);

	return 0;
}