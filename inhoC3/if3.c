#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main3() {
	// if(){} : ()�ȿ� �ִ� ������ �������� {}�ڵ� ����
	// if(){} ~ else{} : ()�� ������ if�� {}����, Ʋ���� else{}�� ����

	// ����
	// 10���� ������
	// 100���� ������,
	// 1000���� ������,
	// 1000 �̻�����,
	int num = 10;

	if (num < 10) {
		printf("10���� �۴�\n");
	}
	else if (num < 100) {					// ���� if�� Ʋ���� ��� �˻�
		printf("100���� �۴�\n");
	}
	else if (num < 1000) {					// ���� if�� Ʋ���� ��� �˻�
		printf("1000���� �۴�\n");
	}
	else{									// �� Ʋ������
		printf("1000 �̻��̴�\n");
	}

	int age = 21;

	if (age > 20) {
		printf("����\n");
	}
	else if (age > 14) {
		// else if(){} : ���� �ִ� ������ Ʋ���� �˻�
		printf("û�ҳ�\n");
	}
	else {
		printf("�̼�����\n");
	}

	/*
	if(����1){
		����1�� ������� ����
	}
	else if(����2){
		����2�� ������� ����
	}
	else if(����3){
		����3�� ������� ����
	}
	else{
		��� ������ Ʋ���� �� ����
	}
	*/

	printf("\nQuiz\n");

	int score = 0;
	printf("������ �Է��ϼ���>>");
	scanf("%d",&score);

	if (score >= 90) {
		printf("A����");
	}
	else if (score >= 80) {
		printf("B����");
	}
	else if ( score >= 70) {
		printf("C����");
	}
	else if (score >= 60) {
		printf("D����");
	}
	else {
		printf("F����");
	}
	return 0;
}