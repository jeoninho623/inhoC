#include <stdio.h>

// 함수의 구조 : 입력값, return값, 자료형
// 자료형 함수형(){}
// 입력값 생략가능, return값 생략가능, 자료형은 return값을 따라간다
// 입력값은 ()에 변수로 준비를 해두고, 내용은 {}에 입력한다

// 입력값 X, 반환값 X
void First() {
	// return을 안할 것이기 때문에 생략, 자료형 void
	// 입력값 안 받을것이기 때문에 ()는 비워둠
	// 사용자가 first 함수를 사용했을때 동작할 코드를 적음
	char str[64];
	printf("첫번째 함수 사용! \n");
	scanf("%s",str);
	printf("내가 입력한 문자는>> %s \n",str);
}

// 입력값 O, 반환값 X
void Second(char* str) {
	printf("\n 내가 전달한 문자열>> %s \n", str);
}
 
// 입력값 X, 반환값 O
char* Third() {
	char ss[50] = { 0, };
	printf("입력할 문자열을 적으세요>>");
	scanf("%s",ss);
	return ss;
}
 
// 입력값 O, 반환값 O
int Fourth(int num1, int num2, int num3) {					// 전달받고자 하는 변수만큼 변수를 생성해야함
	printf("전달받은 값: %d, %d, %d", num1, num2, num3);
	printf("다 더해줍니다\n");
	int result = num1 + num2 + num3;
	return result;										// 함수명 앞의 자료형은 return 값의 자료형과 동일하게!
}

int main5() {
/*	First();*/					// 함수의 사용법 (입력 X, 반환 X)

	//Second("문자열");			// 입력 O, 반환 X (입력값은 ()를 통해서 전달)

	char* str = Third();					// 입력 X, 반환 O (반환값이 있으면 변수로 받거나 변수처럼 사용된다)
	printf("반환받은 값 : %s\n", str);
	printf("반환받은 값 : %s\n", Third());

	int result = Fourth(5, 7, -2);			// 입력 O, 반환 O
	printf("결과값 : %d \n", result);
	printf("결과값 : %d \n", Fourth(1,1,-1));




	return 0;
}