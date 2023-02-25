#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main() {
	// 정수를 입력받아서 홀수인지 짝수인지 판별
	//int num;
	//printf("정수를 입력하세요>>");
	//scanf("%d",&num);
	//
	//if (num % 2 == 0) {
	//	printf("짝수\n");
	//}
	//else {
	//	printf("홀수\n");
	//}

	// 나이에 따른 지하철 요금표
	// 나이를 입력하면 요금을 안내해주는 프로그램
	/*
	6세 미만, 65세 이상 : 무료
	6세 이상, 13세 미만 : 500원
	13세 이상, 19세 미만 : 900원
	19세 이상, 65세 미만 :1250원
	*/

	//int age;

	//printf("나이를 입력하세요>>");
	//scanf("%d",&age);

	//if (age < 6 || age >= 65) {
	//	printf("무료입니다.");
	//}
	//else if (age >= 6 && age < 13) {
	//	printf("500원입니다.");
	//}
	//else if (age >= 13 && age < 19) {
	//	printf("900원입니다.");
	//}
	//else if (age >= 19 && age < 65) {
	//	printf("1250원입니다.");
	//}

	//printf("\n");

	// if ~ else if ~ else : 조건문

	// 중간고사 평균을 구하고 점수에 따라서 학점을 부여
	// switch 사용
	// 90이상 A, 80이상 B, 70이상 C, 60이상 D, 60미만 F
	// 국어 88, 영어 90, 수학 58, 사회 81, 과학 72
	// () 내용과 case가 같은지 비교
	//int kor = 88, eng = 90, math = 58, so = 81, se = 72;
	//int sum = kor+eng+math+so+se ;
	//double avg = sum / 5.0;
	//
	//switch ((int)avg / 10) {
	//	case 10: case 9 :
	//		printf("A학점");
	//		break;
	//	case 8 :
	//		printf("B학점");
	//		break;
	//	case 7 :
	//		printf("C학점");
	//		break;
	//	case 6:
	//		printf("D학점");
	//		break;
	//	default:
	//		printf("F학점");
	//}

	//printf("\n");

	// 윤년 구하는 프로그램 만들기
	// 윤년 : 년도가 4의 배수이면서 100의 배수가 아닌 년도 or 400의 배수인 년도
	// 윤년이면 2월이 29일로 끝남
	// 년도를 입력하면 해당 년도가 윤년인지 판별해주는 프로그램 만들기

	int year;
	printf("년도를 입력하세요>>");
	scanf("%d",&year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("윤년입니다.\n");
	}
	else {
		printf("윤년이 아닙니다.\n");
	}

	return 0;
}