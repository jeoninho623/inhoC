#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {
	//출력
	printf("Hello world\n");
	printf("메롱 //\n");

	// 한줄 주석 (이 줄은 코드가 아니라 메모로 취급, ctrl + shift + /)
	// /**/ 여러줄 주석 ** 사이에 입력
	/*
		안녕하세요
		반갑습니다
		여러줄 주석입니다

		ctrl + z : 뒤로가기
		ctrl + y : 뒤로가기 취소
	*/

	// 변수(variable) : 저장공간
	// 변수 선언 (변수를 만드는 방법)
	// 자료형 변수명;
	char word;					// 문자형 변수 선언		%C			(1byte == 8bit)
	int number;					// 정수형 변수			%D			(4byte)
	double dNumber;				// 실수형 변수			%lf			(8byte)
	char d[256];				// 문자열형 변수		%S			(1*256 byte)		==파이썬 리스트 

	// 변수에 값을 대입 (대입연산자)
	// 변수명 = 데이터값;
	word = 'q';
	number = -3;
	dNumber = 3.141592;
	sprintf(d,"bye world");
	
	// 변수 초기화 (변수 선언과 동시에 대입까지)
	char str2[256] = "hello world";

	// 변수 사용
	int number2 = number;						// number에 들어있는 값을 사용 (자료형없이 적어주기)
	printf("문자형은 %c\n", word);
	printf("정수형은 %d\n", number);
	printf("실수형은 %lf\n", dNumber);
	printf("문자열은 %s\n", str2);
	printf("문자열은 %s\n", d);

	// + : 더하기
	// - : 빼기
	// * : 곱하기
	// / : 나누기
	// % : 나머지 구하기

	// 정수형 또는 실수형 변수 2개를 만들고 
	// 산술연산하기

	int num3 = 4, num4 = 2;
	printf("더한값: %d\n", num3 + num4);
	printf("뺀값: %d\n", num3 - num4);
	printf("곲한값: %d\n", num3 * num4);
	printf("나눈값: %d\n", num3 / num4);
	printf("나머지: %d\n", num3 % num4);

	return 0;
}