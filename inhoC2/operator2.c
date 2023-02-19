#include <stdio.h>

int main3() {
	// 연산자 (말이 어려운거지 그냥 기호)
	// 1. 대입 연산자 =
	int num1 = 3;
	int num2 = 4;						// 오른쪽에 있는 값을 왼쪽에 있는 공간에 담는다
	
	// 2. 산술 연산자
	// 사칙연산, 나머지구하기
	
	// 3. 누적 연산자
	// +=, -=, *=, /=, %=	(줄인말)
	num1 = num1;						// 왼쪽은 공간개념, 오른쪽은 안에 들어있는 값
	num1 = num1 + 2;					// num1에 들어있는 값에 +2를 한 다음 num1에 그대로 담는다
	num1 += 2;					// '누적 연산자는 줄인말'이다
	num1 -= 1;					// 누적빼기
	num1 *= 2;					// 누적곱하기
	num1 /= 2;					// 누적나누기
	num1 %= 2;					// 나머지를 구한 다음에  다시 저장

	printf("원본 num2: %d\n", num2);
	num2 += 1;					// num2 = num2 + 1;
	printf("누적연산한 num2: %d\n", num2);
	
	// 4. 증감 연산자
	// ++, --
	// 누적연산자를 한번 더 줄인 표현 (+1, -1인 경우에만 사용가능)
	num1 = num1 + 1;
	num1 += 1;
	num1++;
	++num1;
	
	num1 = num1 - 1;
	num1 -= 1;
	num1--;
	--num1;

	// 타이밍 차이(전위pre, 후위post)
	++num1;			// 먼저 1 더하고 해당 코드를 실행 (빠른적용)
	num1++;			// 코드 실행 다 끝나고나서(;) 1을 더해서 저장 (느린적용)

	printf("%d\n", ++num2);			// 1을 더하고 출력
	printf("%d\n", num2++);			// 출력하고나서 1 더하기 (해당 라인에는 반영 X)

	// 5. 비교 연산자
	// >, <, <=, >=, ==, !=
	// 6. 관계 연산자
	// 7. 삼항 연산자
	// 8. 비트 연산자
	// 9. 쉬프트 연산자




	return 0;
}