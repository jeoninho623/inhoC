#include <stdio.h>

int main4() {
	// #1
	// ���̰� 5�� int�� �迭�� �����ϰ� �ʱ�ȭ�Ѵ�. �̶� �� ��Ҵ� ���ϴ� ���� ��´�.
	// �ش� �迭�� ���� ���� ����� ����ϱ�

	/*
	1. ����
	2. ���
	*/
	
	int num[5];
	int sum = 0;
	double avg = 0.0;

	num[0] = 90;
	num[1] = 80;
	num[2] = 70;
	num[3] = 80;
	num[4] = 85;

	sum = num[0] + num[1] + num[2] + num[3] + num[4] + num[5];
	avg = (double)sum / 5.0;
	printf("������ %d\n", sum);
	printf("����� %lf\n", avg);

	// #2 ����ܾ �ϳ� �Է� �޾Ƽ� �������� ����ϴ� ���α׷�

	/*
	�Է°� : hello
	��°� : olleh
	*/

	char ss[5];
	char s;
	int a = 0;

	printf("�Է�: ");
	scanf("%s", ss, 100);

	while (ss[a] != '\0') a++;
	for (int i = 0; i < a / 2; i++) {
		s = ss[i];
		ss[i] = ss[a - i - 1];
		ss[a - i - 1] = s;
		}
	printf("���: %s\n",ss);


	char str[64] = { '\0', };
	char reverse[64] = { 0, };

	printf("���� ���� �� : %s", str);
	scanf("%s",str);
	int j = 0;
	for (int i = 63; i >= 0; i--) {
		if (str[i] == '\0') {
			continue;
		}
		reverse[j] = str[i];
		j++;
	}
	printf("%s", reverse);
	// NULL ���ڰ� �ƴ� ��������
	// reverse[0] = str [4];
	// reverse[1] = str [3];
	// reverse[2] = str [2];
	// reverse[3] = str [1];
	// reverse[4] = str [0];

	


	return 0;
}