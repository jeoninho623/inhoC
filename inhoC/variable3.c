#include <stdio.h>

int main4() {
	//printf("�ۼ��� : ����ȣ\n�ۼ���¥ : 2023-02-18 \n��� : printf�� ���ڿ� ���");
	// �̸�, �⵵, ��, ��, f ==> ����
	// ���ڿ�[] ���� : �̸�		%s
	// ���� ���� : �⵵, ��, ��		%d
	// ���ں��� : f		%c

	char name[] = "ȫ�浿";
	printf("�ۼ���: %s\n", name);
	int year = 2023;
	int month = 2;
	int day = 18;
	printf("�ۼ���¥: %d-%d-%d\n", year, month, day);
	char spel = 'f';						// ���� �������� ū ����ǥ �� ���� ��������ǥ�� �����ϱ�.
	printf("���: print%c�� ���ڿ� ���",spel);

	return 0;
}