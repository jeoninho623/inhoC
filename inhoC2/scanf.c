#include <stdio.h>

int main1() {

	char str[100];
	int num;
	double dnum;
	char chr;

	printf("������ �Է��ϼ���>>");				// ��� printf
	scanf("%d",&num);					// �Է� scanf			& : �ּ�������
	printf("�Է��Ѱ��� %d�Դϴ�.\n", num);

	printf("���ڿ��� �Է��ϼ���>>");				
	scanf("%s",str);					// ���ڿ��� & ����
	printf("�Է��Ѱ��� %s�Դϴ�.\n", str);	

	printf("�Ǽ��� �Է��ϼ���>>");
	scanf("%lf",&dnum);					
	printf("�Է��Ѱ��� %.2lf�Դϴ�.\n", dnum);

	rewind(stdin);			// scanf �����Է� ���׶����� ���ۺ���
	printf("���ڸ� �Է��ϼ���>>");
	scanf("%c", &chr);
	printf("�Է��Ѱ��� %c�Դϴ�.\n", chr);			// char�� �ѱ� �Ұ��� (�ѱ��� ���� 2�� ������)

	return 0;
}