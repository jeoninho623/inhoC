#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {
	//���
	printf("Hello world\n");
	printf("�޷� //\n");

	// ���� �ּ� (�� ���� �ڵ尡 �ƴ϶� �޸�� ���, ctrl + shift + /)
	// /**/ ������ �ּ� ** ���̿� �Է�
	/*
		�ȳ��ϼ���
		�ݰ����ϴ�
		������ �ּ��Դϴ�

		ctrl + z : �ڷΰ���
		ctrl + y : �ڷΰ��� ���
	*/

	// ����(variable) : �������
	// ���� ���� (������ ����� ���)
	// �ڷ��� ������;
	char word;					// ������ ���� ����		%C			(1byte == 8bit)
	int number;					// ������ ����			%D			(4byte)
	double dNumber;				// �Ǽ��� ����			%lf			(8byte)
	char d[256];				// ���ڿ��� ����		%S			(1*256 byte)		==���̽� ����Ʈ 

	// ������ ���� ���� (���Կ�����)
	// ������ = �����Ͱ�;
	word = 'q';
	number = -3;
	dNumber = 3.141592;
	sprintf(d,"bye world");
	
	// ���� �ʱ�ȭ (���� ����� ���ÿ� ���Ա���)
	char str2[256] = "hello world";

	// ���� ���
	int number2 = number;						// number�� ����ִ� ���� ��� (�ڷ������� �����ֱ�)
	printf("�������� %c\n", word);
	printf("�������� %d\n", number);
	printf("�Ǽ����� %lf\n", dNumber);
	printf("���ڿ��� %s\n", str2);
	printf("���ڿ��� %s\n", d);

	// + : ���ϱ�
	// - : ����
	// * : ���ϱ�
	// / : ������
	// % : ������ ���ϱ�

	// ������ �Ǵ� �Ǽ��� ���� 2���� ����� 
	// ��������ϱ�

	int num3 = 4, num4 = 2;
	printf("���Ѱ�: %d\n", num3 + num4);
	printf("����: %d\n", num3 - num4);
	printf("���Ѱ�: %d\n", num3 * num4);
	printf("������: %d\n", num3 / num4);
	printf("������: %d\n", num3 % num4);

	return 0;
}