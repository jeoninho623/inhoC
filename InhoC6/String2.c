#include <stdio.h>
#include <string.h>

int main3() {
	// �� ���� ���ڿ��� �Է� �޾� ������ ���� ������ �˷��ִ� ���α׷�

	/*
	�����ڸ޽�
	�����ڸ޽�
	==> �����ϴ�

	�����ڸ޽�
	ȣ����
	==> ���� �ʽ��ϴ�
	*/
	char str1[50] = { 0, };
	char str2[50] = {0,};

	scanf("&[^\ns", str1);
	rewind(stdin);			// ���ۺ���
	scanf("&[^\ns", str2);
	

	if (strcmp(str1, str2) == 0) {
		printf("�����ϴ�.");
	}
	else {
		printf("�����ʽ��ϴ�.");
	}






	// �Է¹��� ���ڿ� �� ���̰� �� ���ڿ����� ����ϱ�

	/*
	�����ڸ޽�
	ȣ����

	�����ڸ޽� ȣ����
	*/

	int len1 = strlen(str1);
	int len2 = strlen(str2);

	if (len1 > len2) {
		printf("%s %s", str2, str1);
	}
	else {
		printf("%s %s", str1, str2);
	}

	return 0;
}