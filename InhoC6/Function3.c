#include <stdio.h>

// 정수 2개를 전달받아 더 큰 정수를 반환 (같으면 0 반환)
int getBigger(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if (n1 < n2) {
		return n2;
	}
	else {
		return 0;
	}
}

void Cal(int num1, int num2) {
	printf("%d, %d, %d, %d", num1 + num2, num1 - num2, num1 * num2, num1 / num2);
}
int Sum(int num1, int num2) {
	int sum = 0;
	for (int i = num1+1; i < num2; i++) {
		sum += i;
	}
	printf("\n%d와 %d 사이의 총합은 %d\n", num1, num2, sum);
	return sum;
}
void count(num1) {

}
	




int main() {
	//int result;

	//result = getBigger(3, 5);								// 5
	//printf("첫번째 결과 : %d \n", result);

	//result = getBigger(8, 2);								// 8
	//printf("두번째 결과 : %d \n", result);

	//result = getBigger(4, 4);								// 0
	//printf("세번째 결과 : %d \n", result);


	// #1
	// 두개의 정수를 매개변수로 입력받아 두 정수의 덧셈, 뺄셈, 곱셈, 나눗셈 결과를 모두 출력하는 함수 정의
	Cal(3, 5);
	// #2
	// 두개의 정수를 매개변수로 받아서 두 정수 사이의 모든 숫자의 합을 반환하는 함수 정의
	Sum(5, 9);
	/*
	5와 9 사이의 정수의 총합은 : 21
	*/

	// #3 정수 한개를 매개변수로 받아 그 수보다 200 더 큰 정수 사이 중 7의 배수가 몇개나 존재하는지 반환해주는 함수 정의
	/*
	정수를 입력하세요 : 100
	100과 300 사이 7의 배수는 28개입니다!
	*/


	// #4 사용자로부터 키를 입력받아 m 단위로 반환하는 함수 정의
	// 키 scanf입력은 main 함수에서 진행하고
	// 정의한 함수에서는 매개변수로 받아 m단위로 반환
	/*
	키를 cm단위로 입력하세요 : 181cm
	결과 : 1.81m
	*/

	// #5 초를 입력받아 매개변수로 전달한다.
	// 함수는 전달받은 초를 시/분/초 형태로 출력해주기

	/*
	초 : 3615
	결과 : 1시간/0분/15초
	*/
	return 0;
}