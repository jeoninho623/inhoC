#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main() {
	// ������ �Է¹޾Ƽ� Ȧ������ ¦������ �Ǻ�
	//int num;
	//printf("������ �Է��ϼ���>>");
	//scanf("%d",&num);
	//
	//if (num % 2 == 0) {
	//	printf("¦��\n");
	//}
	//else {
	//	printf("Ȧ��\n");
	//}

	// ���̿� ���� ����ö ���ǥ
	// ���̸� �Է��ϸ� ����� �ȳ����ִ� ���α׷�
	/*
	6�� �̸�, 65�� �̻� : ����
	6�� �̻�, 13�� �̸� : 500��
	13�� �̻�, 19�� �̸� : 900��
	19�� �̻�, 65�� �̸� :1250��
	*/

	//int age;

	//printf("���̸� �Է��ϼ���>>");
	//scanf("%d",&age);

	//if (age < 6 || age >= 65) {
	//	printf("�����Դϴ�.");
	//}
	//else if (age >= 6 && age < 13) {
	//	printf("500���Դϴ�.");
	//}
	//else if (age >= 13 && age < 19) {
	//	printf("900���Դϴ�.");
	//}
	//else if (age >= 19 && age < 65) {
	//	printf("1250���Դϴ�.");
	//}

	//printf("\n");

	// if ~ else if ~ else : ���ǹ�

	// �߰���� ����� ���ϰ� ������ ���� ������ �ο�
	// switch ���
	// 90�̻� A, 80�̻� B, 70�̻� C, 60�̻� D, 60�̸� F
	// ���� 88, ���� 90, ���� 58, ��ȸ 81, ���� 72
	// () ����� case�� ������ ��
	//int kor = 88, eng = 90, math = 58, so = 81, se = 72;
	//int sum = kor+eng+math+so+se ;
	//double avg = sum / 5.0;
	//
	//switch ((int)avg / 10) {
	//	case 10: case 9 :
	//		printf("A����");
	//		break;
	//	case 8 :
	//		printf("B����");
	//		break;
	//	case 7 :
	//		printf("C����");
	//		break;
	//	case 6:
	//		printf("D����");
	//		break;
	//	default:
	//		printf("F����");
	//}

	//printf("\n");

	// ���� ���ϴ� ���α׷� �����
	// ���� : �⵵�� 4�� ����̸鼭 100�� ����� �ƴ� �⵵ or 400�� ����� �⵵
	// �����̸� 2���� 29�Ϸ� ����
	// �⵵�� �Է��ϸ� �ش� �⵵�� �������� �Ǻ����ִ� ���α׷� �����

	int year;
	printf("�⵵�� �Է��ϼ���>>");
	scanf("%d",&year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("������ �ƴմϴ�.\n");
	}

	return 0;
}