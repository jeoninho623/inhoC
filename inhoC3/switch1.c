#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main5() {
	// if ~ else if ~ else
	// switch ~ case ~ break
	// switch�� : ���� ���� ã�� �� ����ϴ� ���ǹ�

	// if�� : ���� ����, ��ġ/����ġ ���� (>, ==)
	// switch: ��ġ���� (==)
	char word;
	printf("�ܾ �Է��ϼ�>>");
	scanf("%c",&word);
	// ����� �Ǵ� ������ ()�� ���´�
	switch (word) {
	case 'a':
		printf("�ܾ�� a�Դϴ�.");
		break;
	case 'b':
		printf("�ܾ�� b�Դϴ�.");
		break;
	case 'c':
		printf("�ܾ�� c�Դϴ�.");
	default:
		printf("�ش��ϴ� �ܾ �����ϴ�.");
	}
	printf("\n");
	
	//switch : ()�� ��ġ�ϴ� �ָ� ã��

	int num = 0;
	printf("��ȣ�� �����ϼ���>>");
	scanf("%d",&num);

	switch (num) {
	case 1:
		printf("1�� �����߽��ϴ�.\n");
		break;
	case 2:
		printf("2�� �����߽��ϴ�.\n");
		break;
	case 3:
		printf("3�� �����߽��ϴ�.\n");
		break;
	case 4:
		printf("4�� �����߽��ϴ�.\n");
		break;
	default:
		printf("������ ��ȣ�� �����~\n");
		
	}
	// 1~4, default
	// 1�� �����߽��ϴ�.

	return 0;
}