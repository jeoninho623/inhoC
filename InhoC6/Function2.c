#include <stdio.h>

// �Լ��� ���� : �Է°�, return��, �ڷ���
// �ڷ��� �Լ���(){}
// �Է°� ��������, return�� ��������, �ڷ����� return���� ���󰣴�
// �Է°��� ()�� ������ �غ� �صΰ�, ������ {}�� �Է��Ѵ�

// �Է°� X, ��ȯ�� X
void First() {
	// return�� ���� ���̱� ������ ����, �ڷ��� void
	// �Է°� �� �������̱� ������ ()�� �����
	// ����ڰ� first �Լ��� ��������� ������ �ڵ带 ����
	char str[64];
	printf("ù��° �Լ� ���! \n");
	scanf("%s",str);
	printf("���� �Է��� ���ڴ�>> %s \n",str);
}

// �Է°� O, ��ȯ�� X
void Second(char* str) {
	printf("\n ���� ������ ���ڿ�>> %s \n", str);
}
 
// �Է°� X, ��ȯ�� O
char* Third() {
	char ss[50] = { 0, };
	printf("�Է��� ���ڿ��� ��������>>");
	scanf("%s",ss);
	return ss;
}
 
// �Է°� O, ��ȯ�� O
int Fourth(int num1, int num2, int num3) {					// ���޹ް��� �ϴ� ������ŭ ������ �����ؾ���
	printf("���޹��� ��: %d, %d, %d", num1, num2, num3);
	printf("�� �����ݴϴ�\n");
	int result = num1 + num2 + num3;
	return result;										// �Լ��� ���� �ڷ����� return ���� �ڷ����� �����ϰ�!
}

int main5() {
/*	First();*/					// �Լ��� ���� (�Է� X, ��ȯ X)

	//Second("���ڿ�");			// �Է� O, ��ȯ X (�Է°��� ()�� ���ؼ� ����)

	char* str = Third();					// �Է� X, ��ȯ O (��ȯ���� ������ ������ �ްų� ����ó�� ���ȴ�)
	printf("��ȯ���� �� : %s\n", str);
	printf("��ȯ���� �� : %s\n", Third());

	int result = Fourth(5, 7, -2);			// �Է� O, ��ȯ O
	printf("����� : %d \n", result);
	printf("����� : %d \n", Fourth(1,1,-1));




	return 0;
}