#include <stdio.h>

int main5() {
	// 1. 
	int num1 = 27;
	
	printf("%d\n", num1 > 10);				// 1
	printf("%d\n", num1 != 5);				

	printf("%d\n", num1 >= 27);				
	printf("%d\n", num1 == 27);				// 1
	
	printf("%d\n", num1 != 30);				// 1
	printf("%d\n", num1 <= 30);


	// 2.
	// ���� = 86, ���� = 75, ���� = 88, ��ȸ = 60, ���� = 96
	// ����� ���ϼ��� (�Ҽ�������)

	int k = 86, e = 75, m = 88, so = 60, s = 96;
	int sum = 0;
	double avg = 0.0;

	sum = k + e + m + so + s;
	avg = (double)sum / 5;
	printf("������: %d\n", sum);
	printf("�����: %0.2lf\n", avg);


	//3. ���������� ���
	int num = 5;
	// �� num�� ���������ڸ� ������ ����Ͽ� 6 6 8 ����� ������ ++, --
	printf("num�� ��: %d\n", ++num);				//6
	printf("num�� ��: %d\n", num++);				//6
	printf("num�� ��: %d\n", ++num);				//8

	return 0;
}