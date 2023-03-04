#include <stdio.h>

int main7() {
	
	// #1

	int a = 10;							// 변수 a에 10 담아서 만들고
	int* p = &a;						// 포인터변수 p에 a의 주소를 담아 만들고
	*p = 20;							// 역참조해서 20 넣으니깐 a에 20 들어가고
	printf("%d", a);					
	*p = 50;							// 역참조해서 50 넣으니깐 a에 50 들어감
	printf("%d", a);
	//2050


	// #2
	printf("\n");
	// 정수 10을 저장하는 int형 변수 number를 선언 및 초기화하고
	// number가 저장된 메모리 주소를 저장하는 포인터 변수 pnumber를 선언합니다
	// 그리고 printf 함수를 호출해 정수 10과 변수 number의 주소를 출력해보세요
	// 이때 printf 함수의 출력 데이터로는 포인터 변수 pnumber 만을 이용해보세요

	int number = 10;
	int* pnumber;
	pnumber = &number;

	printf("주소 : %p \n", &pnumber);
	printf("값 : %d \n", *pnumber);



	// #3

	int *ptr;
	int num1 = 5;
	int num2 = 8;

	ptr = &num1;
	printf("값 : %d\n", *ptr);

	ptr = &num2;
	printf("값 : %d\n", *ptr);





	// #4
	int n1 = 100, n2 = 200;
	int* ptr1 = &n1, * ptr2 = &n2;
	printf("%d %d\n", *ptr1, *ptr2);			// 100 200


	ptr1 = &n2;
	ptr2 = &n1;
	printf("%d %d\n", *ptr1, *ptr2);			// 200 100

	return 0;
}